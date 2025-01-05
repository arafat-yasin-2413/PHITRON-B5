

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

    def add_menu(self,food):
        Restaurant.add_food_items_to_menu(food)
    
    def remove_menu(self):
        pass
    
    def add_new_customer(self):
        pass
    
    def view_all_customers(self):
        pass
    
    def remove_customer(self):
        pass
    
    def view_menu(self):
        pass
    
    def modify_menu(self):
        pass
        # TODO: add/remove items
        # TODO: update price
    
    
    
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
        print(f'You have to pay : {total} tk')
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
        
        
    def add_to_cart(self,restaurant,item_name,wanted_quantity):
        main_item = restaurant.find_food_item(item_name)
        
        if main_item is not None:
            if wanted_quantity > main_item.quantity:
                print(f'Beshi order korechen. Current Stock : {main_item.quantity}')
            else:
                self.cart.add_item(main_item,wanted_quantity)
        else:
            print('Item Not Found')
            
            
    def view_cart(self):
        print(f"Name\t Price\t Qty\t Sub-total")
        for k,v in self.cart.items.items():
            subtotal = v*k.price
            print(f"{k.name}\t {k.price}\t {v}\t {subtotal}")
    
            
    def checkout(self):
        self.cart.calculate_total_price()
      

    def __repr__(self):
        return super().__repr__()


    def add_fund(self,amount):
        if amount>0:
            self.__balance += amount
            print(f'{amount} tk added to wallet.')
            print()
        else:
            print('Invalid Amount is Given.')
            
    
    def check_balance(self):
        print(f"Current Balance is : {self.__balance} tk")
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
        else:
            self.__balance -= total_bill_amount
            print(f"Total Bill : {total_bill_amount} tk PAID SUCCESSFULLY.")
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
        
    def add_customers_to_the_system(self,customer_object):
        self.saved_customers.append(customer_object)
        
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
        print()
        print('Customer Details')
        print()
        
        for customer in self.saved_customers:
            print(f"Customer Name : {customer.name}, Email : {customer.email}, Address : {customer.address} ")
    
    def add_food_items_to_menu(self,item):
        self.menu.append(item)
        print(f"Food : {item.name} Added To The Menu Successfully.")
        
    def show_menu(self):
        print()
        print('------------------------------')
        print('\tShowing Menu')
        print('------------------------------')
        print('Food Items:')
        
        print('Name\tPrice\tQuantity')
        for food in self.menu:
            if food.type.lower() == 'food':
                print(f"{food.name}\t{food.price}\t{food.quantity}")
        print()
        
        print('Drink Items:')
        print('Name\tPrice\tQuantity')
        for food in self.menu:
            if food.type.lower() == 'drinks':
                print(f"{food.name}\t{food.price}\t{food.quantity}")
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
        
        
        
        

class Food:
    def __init__(self,name,price,quantity,type):
        self.name = name
        self.price = price
        self.quantity = quantity
        self.type = type
        
        
    def __repr__(self):
        return f"{self.name}\t{self.price}\t{self.quantity}"
    





# -------------------------------- main ----------------------------------- 
    
    
    
mithai = Restaurant('Mithai')
    
    
pizza = Food('Pizza',200,20,'food')
burger = Food('Burger',30,60,'food')
singara = Food('Singara',15,60,'food')
somucha = Food('Somucha',20,40,'food')

borhani = Food('Borhani',45,35,'drinks')
malai_tea = Food('Malai T',60,40,'drinks')
mojo = Food('Mojo',20,40,'drinks')


# adding food items to menu
mithai.add_food_items_to_menu(pizza)
mithai.add_food_items_to_menu(burger)
mithai.add_food_items_to_menu(singara)
mithai.add_food_items_to_menu(somucha)
mithai.add_food_items_to_menu(borhani)
mithai.add_food_items_to_menu(malai_tea)
mithai.add_food_items_to_menu(mojo)

# mithai.show_menu()

# mithai.remove_item('burger')
# mithai.show_menu()







# rahim = Customer('Rahim Uddin','rahim@gmail.com','Khulna')
# karim = Customer('Karim Khan','karim@gmail.com','Rajbari')

# mithai.add_customers_to_the_system(rahim)
# mithai.add_customers_to_the_system(karim)

# mithai.view_saved_customers()
# mithai.remove_customer_from_the_system('rahiM uddiN')
# mithai.view_saved_customers()


# rahim.add_fund(-40)
# rahim.check_balance()
# rahim.add_fund(5600)
# rahim.check_balance()


# print(f"Current Status of singara. Qty : {singara.quantity}")


# rahim.view_menu(mithai)

# rahim.check_balance()


# rahim.add_to_cart(mithai,'siNgara',6)
# rahim.add_to_cart(mithai,'singara',7)
# # rahim.cart.remove_item('singara')
# rahim.add_to_cart(mithai,'mojo',2)


# rahim.view_cart()
# rahim.add_fund(1600)

# rahim.checkout()
# rahim.pay_bill()
# rahim.pay_bill()
# rahim.check_balance()



# rahim.add_to_cart(mithai,'pizza',4)
# rahim.view_cart()
# rahim.checkout()
# rahim.pay_bill()
# rahim.check_balance()

# rahim.show_past_orders()

# rahim.checkout()
# rahim.pay_bill()





# ----------------- Admin functionalities chech ----------------

adm1 = Admin('Moshiur ADM','mosh_adm@gmail.com','Dhamrai')

item_name = input('Enter Item Name : ')
price = int(input('Enter Price : '))
qty = int(input('Enter Quantity : '))
typ = input('Enter Type (food/drinks) : ')

food_obj = Food(item_name,price,qty,typ)
adm1.add_menu(food_obj)
