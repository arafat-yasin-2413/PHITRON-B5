

class User:
    def __init__(self,name,email,address):
        self.name = name
        self.email = email
        self.address = address
        
    def __repr__(self):
        return f"{self.name}   {self.email}  {self.address}"


class Admin(User):
    def __init__(self, name, email, address):
        super().__init__(name, email, address)
    
        
    def __repr__(self):
        return f"This is Admin : {self.name}. How Can I Help You?"
    
    def enlist_to_the_system(self,restaurant_object):
        restaurant_object.add_admins_to_the_system(self)
        
    def show_admin_profile(self):
        print()
        print('Showing ADMIN Profile')
        print()
        print(f"{self.name}   {self.email}  {self.address}")
        

    def add_item(self,food,restaurant_object):
        restaurant_object.add_food_items_to_menu(food)
    
    def remove_item(self,item_name,restaurant_object):
        restaurant_object.remove_item(item_name)
        
    def update_food_name(self,restaurant_object,item_name,new_name):
        restaurant_object.update_item_name(item_name,new_name)
        
    def update_food_price(self,restaurant_object,item_name,new_price):
        restaurant_object.update_price(item_name,new_price)
        
    def update_food_quantity(self,restaurant_object,item_name,new_quantity):
        restaurant_object.update_item_quantity(item_name,new_quantity)
        
    
    def add_new_customer(self,customer_object,restaurant_object):
        restaurant_object.add_customers_to_the_system(customer_object)
    
    def view_all_customers(self,restaurant_object):
        restaurant_object.view_saved_customers()
    
    def remove_customer(self,customer_name,restaurant_object):
        restaurant_object.remove_customer_from_the_system(customer_name)
    
    def view_menu(self,restaurant_object):
        restaurant_object.show_menu()
    
    
    
    
    
class Order:
    def __init__(self):
        self.items = {}
        
    def add_item(self,food_item,wanted_quantity):
        # print(f"{food_item},-- {wanted_quantity}")
        
        if food_item in self.items:
            self.items[food_item] += wanted_quantity
            food_item.quantity -= wanted_quantity
        else:    
            self.items[food_item] = wanted_quantity
            food_item.quantity -= wanted_quantity
            
        # for key, value in self.items.items():
        #     print(f"{key} ----- {value}")
            
            
    def calculate_total_price(self):
        total = 0
        for key, value in self.items.items():
            total += value*key.price
        # print(f'You have to pay : {total} tk')
        return total
        
    def find_item_in_ordered_dictionary(self,item_name):
        for key, value in self.items.items():
            if key.name.lower() == item_name.lower():
                return key
        return None
                
    def remove_item(self,item_name):
        item = self.find_item_in_ordered_dictionary(item_name)
        if item is not None:
            print('Paisi')     
            # print(f"{item.name} -> {item.price} --> {item.quantity}")
            print(f"ordered : {self.items[item]} pcs")
            item.quantity += self.items[item]
            del self.items[item]
            print(f"Printing self.items : {self.items}")
        else:
            print('Painai')  
    
    def send_past_orders(self):
        return self.items                
    
    def clear(self):
        self.items = {}
        
        
    
class Customer(User):
    def __init__(self, name, email, address):
        super().__init__(name, email, address)
        self.__balance = 0
        self.cart = Order()
        self.past_orders = []
        
    def request_to_be_enlisted_to_the_system(self,restaurant_object):
        restaurant_object.add_customers_to_the_system(self)
        
        
    def show_customer_profile(self):
        print()
        print('Showing Customer Profile')
        print()
        print(f"{self.name}   {self.email}  {self.address}")
        
                
    def add_to_cart(self,restaurant,item_name,wanted_quantity):
        main_item = restaurant.find_food_item(item_name)
        
        if main_item is not None:
            if wanted_quantity > main_item.quantity:
                print(f'Beshi order korechen. Current Stock : {main_item.quantity}')
            else:
                self.cart.add_item(main_item,wanted_quantity)
        else:
            print('Invalid Item !!')
            
            
    def view_cart(self):
        if len(self.cart.items) == 0:
            print()
            print('No Items Could be Added. Cart is Empty.')
            print()
        else:
            print()
            print('ORDER SUMMARY')
            print()
            print(f"Name\t Price\t Qty\t Sub-total")
            print('------------------------------------------')
            for k,v in self.cart.items.items():
                subtotal = v*k.price
                print(f"{k.name}\t {k.price}\t {v}\t {subtotal}")
            print()
            
    def checkout(self):
        # self.check_balance()
        calculated_total_price = self.cart.calculate_total_price()
        return calculated_total_price
      

    def __repr__(self):
        return super().__repr__()


    def add_fund(self,amount):
        if amount>0:
            self.__balance += amount
            print()
            print(f'{amount} tk added to wallet.')
            print()
        else:
            print('Invalid Amount is Given.')
            
    
    def check_balance(self):
        # print(f"Current Balance is : {self.__balance} tk")
        return self.__balance
    
    
    def save_past_orders(self):
        previous_order = self.cart.send_past_orders()
        self.past_orders.append(previous_order)
        
    def show_past_orders(self):
        print()
        print('Showing Past Orders')
        print()
        print('Name\t\tUnit Price\tQty\tSub-total')
        for item in self.past_orders:
            for key,value in item.items():
                subtotal = value*key.price
                print(f"{key.name}\t\t{key.price}\t\t{value}\t{subtotal}")
        
    def pay_bill(self):
        total_bill_amount = self.cart.calculate_total_price()
        current_balance = self.check_balance()
        if total_bill_amount > current_balance:
            print(f'Insufficient Money. Shortage : {total_bill_amount-current_balance} tk. Add Fund.')
        elif current_balance > total_bill_amount:
            self.__balance -= total_bill_amount
            print(f"Total Bill : {total_bill_amount} tk PAID SUCCESSFULLY.")
            print(f"Current Balance : {self.check_balance()} tk.")
            self.save_past_orders()
            self.cart.clear()
            
    def view_menu(self,restaurant_object):
        restaurant_object.show_menu()
        
        
    
        










# ------------- Restaurant and Food Section --------------------




class Restaurant:
    
    def __init__(self,name):
        self.name= name
        self.menu = []
        self.saved_customers = []
        self.admins = []
    
    
        
    
    def add_customers_to_the_system(self,customer_object):
        self.saved_customers.append(customer_object)
        print(f"Customer : {customer_object.name} Added to the system.")
        
    def add_admins_to_the_system(self,admin_object):
        self.admins.append(admin_object)
        print(f"ADMIN : {admin_object.name} Added to the system.")
        
    def find_customer_in_the_system(self,customer_name):
        for customer in self.saved_customers:
            if customer.name.lower() == customer_name.lower():
                return customer
        return None
        
    def remove_customer_from_the_system(self,customer_name):
        customer = self.find_customer_in_the_system(customer_name)
        
        if customer is None:
            print("Given Customer Name is Incorrect. Try Again.")
        else:
            self.saved_customers.remove(customer)
            print(f"Customer : {customer_name.upper()} Removed from the Restaurant Database.")
        
   
    def view_saved_customers(self):
        # print(self.saved_customers)
        if len(self.saved_customers) == 0:
            print()
            print(f'Number of Customer = {len(self.saved_customers)}. Add New Customer by Admin.')
            print()
        else:    
            print()
            print('List of Customers')
            print()
            
            for customer in self.saved_customers:
                print(f"Customer Name : {customer.name}, Email : {customer.email}, Address : {customer.address} ")
        
    
    def check_customer_details(self,customer_name):
        customer_object = self.find_customer_in_the_system(customer_name)
        if customer_object is None:
            print("Given Customer Name is Incorrect. No Details can be shown.")
        else:
            customer_object.show_customer_profile()
            customer_object.show_past_orders()
    
    def add_food_items_to_menu(self,item):
        self.menu.append(item)
        print(f"Food : {item.name} Added To The Menu Successfully.")
        # print()
        
    def show_menu(self):
        if len(self.menu) == 0:
            print()
            print('Menu is Empty. No Food Available. Add Foods as ADMIN.')
            print()
        else:
            
            print()
            print('------------------------------')
            print('\tShowing Menu')
            print('------------------------------')
            
            food_available = False
            
            for food in self.menu:
                if food.type.lower() == 'food':
                    food_available = True
            
            if food_available:
                print('Food Items:')
            
                print('Name\t Price\t Quantity')
                for food in self.menu:
                    if food.type.lower() == 'food':
                        print(f"{food.name}\t {food.price}\t {food.quantity}")
                print()
            else:
                print()
                print('NO FOOD ITEM AVAILABLE.')
                print()
                
                
            drinks_available = False
            
            for food in self.menu:
                if food.type.lower() == 'drinks':
                    drinks_available = True
            
            if drinks_available:
                print('Drink Items:')
                print('Name\tPrice\tQuantity')
                for food in self.menu:
                    if food.type.lower() == 'drinks':
                        print(f"{food.name}\t {food.price}\t {food.quantity}")
                print()
            else:
                print()
                print('NO DRINKS ITEM AVAILABLE')
                print()
        
        
    def find_food_item(self,item_name):
        for food in self.menu:
            if food.name.lower() == item_name.lower():
                return food
        return None
        
    def remove_item(self,item_name):
        item = self.find_food_item(item_name)
        if item is None:
            print("Given Food Item is Not in the List")
        else:
            self.menu.remove(item)
            print(f"Food : {item_name} Removed from Menu.")
            
    def update_item_name(self,item_name,new_name):
        item = self.find_food_item(item_name)
        if item is None:
            print("Invalid Food Item. I can't Update it\'s Name")
        else:
            old_name = item.name
            item.name = new_name
            print(f'Name Updated to {item.name}. Old Name was {old_name}.')
            
    def update_price(self,item_name,new_price):
        item = self.find_food_item(item_name)
        if item is None:
            print("Invalid Food Item. I can't Update it\'s Price")
        else:
            old_price = item.price
            item.price = new_price
            print(f'Price Updated for {item.name}. Old Price was {old_price}. New Price is : {item.price}.')
            
    def update_item_quantity(self,item_name,new_quantity):
        item = self.find_food_item(item_name)
        if item is None:
            print("Invalid Food Item. I can't Update it\'s Quantity")
        else:
            old_quantity = item.quantity
            item.quantity = new_quantity
            print(f'Quantity Updated for {item.name}. Old Quantity was {old_quantity}. New Quantity : {item.quantity}.')
            
    
            
            
        
        
        
        

class Food:
    def __init__(self,name,price,quantity,type):
        self.name = name
        self.price = price
        self.quantity = quantity
        self.type = type
        
        
    def __repr__(self):
        return f"{self.name}\t{self.price}\t{self.quantity}"
    





# -------------------------------- main ----------------------------------- 
    




def admin_menus(admin_name):
    print('-------------- ADMIN MENU ----------------')

    name = admin_name
    email = 'admin@gmail.com'
    address = 'DHAKA'
        
    admin = Admin(name,email,address)
    admin.enlist_to_the_system(mama_hotel)
    print('Admin Logged In Successfully...')
    print()
    
    while True:
        print()
        print(f"Welcome \"ADMIN: {admin.name}\" to {mama_hotel.name}!!!")
        
        print('1. Create A New Customer Account')
        print('2. Remove A Customer Account')
        print('3. View Menu')
        print('4. Add Food Item')
        print('5. Remove Food Item')
        print('6. View Registered Customers')
        print('7. Modify Menu')
        print('8. Show ADMIN Profile')
        print('9. Exit')
        
        choice = int(input('Enter Your Choice : '))
        print()
        
        if choice == 1:
            print('Admin is going to add new customer..')
            print()
            name = input('Enter Customer\'s Name : ')
            email = input('Enter Customer\'s Email : ')
            address = input('Enter Customer\'s Address : ')
    
            customer = Customer(name=name, email=email, address=address)
            admin.add_new_customer(customer,mama_hotel)
            
            
        
        elif choice == 2:
            print('Admin is going to Remove a Customer..')
            cust_name = input('Enter Customer\'s Name : ')
            admin.remove_customer(cust_name,mama_hotel)
            
            
            
        elif choice == 3:
            admin.view_menu(mama_hotel)
        
        elif choice == 4:
            print('Admin going to add new food item...')
            item_name = input('Enter Food Item\'s Name : ')
            price = int(input('Enter Price : '))
            qty = int(input('Enter Quantity : '))
            typ = input('Enter Food Type (food/drinks) : ')
            
            food_object = Food(name=item_name,price=price,quantity=qty,type=typ)
            admin.add_item(food_object,mama_hotel)
            print()
            
            

        elif choice == 5:
            print('Admin is going to Remove Food Item..')
            food_item_name = input('Enter Food Item\'s Name : ')
            admin.remove_item(food_item_name,mama_hotel)
        
        elif choice == 6:            
            admin.view_all_customers(mama_hotel)
            
        
        elif choice == 7:
            print('Admin is going to modify Menu..')
            print()
            
            while True:
                print('1. Update Item Name')
                print('2. Update Price')
                print('3. Update Quantity')
                print('4. Exit from Update Section')
                
                print()
                opt = int(input('Enter option to update menu : '))
                
                if opt == 1:
                    print('Updating Item Name..')
                    item_name = input('Enter Item Name : ')
                    new_name = input('Enter New Name : ')
                    admin.update_food_name(mama_hotel,item_name,new_name)
                    
                elif opt == 2:
                    print('Updating Item Price..')
                    print('Price Must be Greater than Zero..')
                    item_name = input('Enter Item Name : ')
                    new_price = int(input('Enter New Price : '))
                    admin.update_food_price(mama_hotel,item_name,new_price)
                    
                elif opt == 3:
                    print('Updating Item Quantity..')
                    print('Quantity Must be Greater than Zero..')
                    item_name = input('Enter Item Name : ')
                    new_quantity = int(input('Enter New Quantity : '))
                    admin.update_food_quantity(mama_hotel,item_name,new_quantity)
                
                elif opt == 4:
                    break
                
                else:
                    print('Invalid Option. Try Again..')
                
        
        elif choice == 8:
            admin.show_admin_profile()
        
        elif choice == 9:
            break
        
        else:
            print('Invalid Choice. Try Again Dear Customer.')
    
    
        
        
        






def customer_menus(customer_object):
    print(f'-------- CUSTOMER \"{customer_object.name}\"s MENU --------')
    
    
    while True:
        print()
        # print(f'Welcome \"{customer.name}\" to {mama_hotel.name}!!')
        print('1. View Menu')
        print('2. Check Available Balance')
        print('3. Add Funds')
        print('4. Place An Order')
        print('5. View Cart and Checkout')
        print('6. Pay Bill')
        print('7. View Past Orders')
        print('8. Exit')
        
        choice = int(input('Enter Your Choice : '))
        print()
        
        if choice == 1:
            customer_object.view_menu(mama_hotel)
        
        elif choice == 2:
            current_balance = customer_object.check_balance()
            print(f"Current Balance : {current_balance} tk.")
            
        elif choice == 3:
            amount = int(input('Enter amount : '))
            customer_object.add_fund(amount)
        
        elif choice == 4:
            print('Customer going to Place An Order...')

            item_name = input("Enter Item Name : ")
            item_qty = int(input('Enter Quantity : '))
            customer_object.add_to_cart(mama_hotel,item_name,item_qty)

        elif choice == 5:
            customer_object.view_cart()
            total_bill = customer_object.checkout()

            print(f'{total_bill} tk bill hoise.')
        
        elif choice == 6:            
            customer_object.pay_bill()
            
        
        elif choice == 7:
            customer_object.show_past_orders()        
        
        elif choice == 8:
            break
        
        else:
            print('Invalid Choice. Try Again Dear Customer.')
            
            
            
        
        

        
        
        
        
        
        
        
        
        
        
        
        
            
            
            






mama_hotel = Restaurant('Mamar Hotel')

pizza = Food('Pizza',200,20,'food')
burger = Food('Burger',30,60,'food')
singara = Food('Singara',15,60,'food')
somucha = Food('Somucha',20,40,'food')

borhani = Food('Borhani',45,35,'drinks')
malai_tea = Food('Malai T',60,40,'drinks')
mojo = Food('Mojo',20,40,'drinks')



# adding food items to menu
mama_hotel.add_food_items_to_menu(pizza)
mama_hotel.add_food_items_to_menu(burger)
mama_hotel.add_food_items_to_menu(singara)
mama_hotel.add_food_items_to_menu(somucha)
mama_hotel.add_food_items_to_menu(borhani)
mama_hotel.add_food_items_to_menu(malai_tea)
mama_hotel.add_food_items_to_menu(mojo)


while True:
    print()
    print('-------------- RESTAURANT MANAGEMENT SYSTEM ----------------')
    print('Welcome!!')
    print('1. Admin Login')
    print('2. Customer Login')
    print('3. Exit')
    
    print()
    choice = int(input('ENTER YOUR CHOICE : '))
    
    if choice == 1:
        username = input('Enter username (Admin) : ')
        if username == 'Admin':
            admin_menus(username)
        else:
            print()
            print('Admin Login Failed. Try Again with "Admin".. ')
        
    elif choice == 2:
        cust_name = input('Enter Customer Name : ')
        customer = mama_hotel.find_customer_in_the_system(cust_name)
        
        if customer is None:
            print()
            print('Login Failed. First Add New Customer by Admin. Then Login As Customer.')
            print()
        elif customer is not None:
            customer_menus(customer)
        
    elif choice == 3:
        break
    else:
        print()
        print("INVALID CHOICE. TRY AGAIN. ")
        print()     
    