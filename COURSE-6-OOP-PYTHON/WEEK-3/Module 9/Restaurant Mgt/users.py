from abc import ABC,abstractmethod
from orders import Order


class User(ABC):
    def __init__(self,name,email,address,phone):
        self.name = name
        self.email = email
        self.address = address
        self.phone = phone
        
        
        
class Customer(User):
    def __init__(self, name, email, address, phone):
        super().__init__(name, email, address, phone)
        self.cart = Order()
        
    def view_menu(self,restaurant):
        restaurant.menu.show_menu()
        
    def add_to_cart(self,restaurant,item_name,quantity):
        item = restaurant.menu.find_item(item_name)
        if item:
            if quantity > item.quantity:
                print('Item Quantity Exceeded!!')
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print('Item Added to Cart')
                print()
        else:
            print("Item not found")
            
    def view_cart(self):
        print("** View Cart **")
        print('-----------------')
        print("Name\tPrice\tQuantity")
        print('--------------------------------')
        for item, quantity in self.cart.items.items():
            print(f"{item.name}\t{item.price}\t{quantity}")
        # print(f'Total Price : {self.cart.total_price()}')
        print(f'Total Price : {self.cart.total_price}')
        
        
    def pay_bill(self):
        print(f'Total {self.cart.total_price} paid successfully !')
        self.cart.clear()
        
    
        
class Employee(User):
    def __init__(self, name, email, address, phone,age,designation,salary):
        super().__init__(name, email, address, phone)
        self.age = age
        self.designation = designation
        self.salary = salary

    def __repr__(self):
        return f"Employee \"{self.name}\" "


class Admin(User):
    def __init__(self, name, email, address, phone):
        super().__init__(name, email, address, phone)
        self.employees = []
        
        
    def add_employee(self,restaurant_obj, emp_obj):
        restaurant_obj.add_employee(emp_obj)
        
    def view_employee(self,restaurant_obj):
        restaurant_obj.view_employees()
    
    def add_new_item(self,restaurant_obj,item_obj):
        restaurant_obj.menu.add_items(item_obj)
        
    def remove_item(self,restaurant_obj,item):
        restaurant_obj.menu.remove_item(item)
        
    def view_menu(self,restaurant_obj):
        restaurant_obj.menu.show_menu()
    
        
    
    




        

                
            








        
        


# al_madani=Restaurant('Hotel Al Madani')
# mn = Menu()
# item1 = FoodItem('Pizza',12.45,10)
# item2 = FoodItem('Burger',10, 30)

# # mn.add_items(item1)
# # mn.add_items(item2)

# # mn.show_menu()


# adm = Admin("Sir Newton",'newton@gmail.com','USA','5433322')
# adm.add_new_item(al_madani,item1)
# adm.add_new_item(al_madani,item2)



# customer1 = Customer('Ratul','ratul@gmail.com','Khulna','38475595')
# customer1.view_menu(al_madani)

# print()
# item_name = input('Enter Item Name : ')
# item_quantity = int(input('Enter Item Quantity : '))

# customer1.add_to_cart(al_madani,item_name,item_quantity)
# customer1.view_cart()
