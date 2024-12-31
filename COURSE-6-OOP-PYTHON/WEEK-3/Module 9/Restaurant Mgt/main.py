from food_item import FoodItem
from menu import Menu
from orders import Order
from restaurant import Restaurant
from users import User,Customer,Admin,Employee


al_madani = Restaurant('Hotel Al Madani')

def customer_menu():
    name = input('Enter Your Name : ')
    email = input('Enter Your Email : ')
    phone = input('Enter Your Phone Number : ')
    address = input('Enter Your Address : ')
    customer = Customer(name = name,email=email,phone=phone,address=address)
    
    while(True):
        print(f"Welcome {customer.name}")
        print('-------------------------------')
        print('1. View Menu')
        print('2. Add Item to Cart')
        print('3. View Cart')
        print('4. Pay Bill')
        print('5. Exit')
        
        choice = int(input('Enter Your Choice : '))
        if choice == 1:
            customer.view_menu(al_madani)
        elif choice == 2:
            item_name = input('Enter Item Name : ')
            item_quantity = int(input('Enter Item Quantity : '))
            customer.add_to_cart(al_madani,item_name,item_quantity)
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.pay_bill()
        elif choice == 5:
            break
        else:
            print('Invalid choice')
         
            
def admin_menu():
    name = input('Enter Your Name : ')
    email = input('Enter Your Email : ')
    phone = input('Enter Your Phone : ')
    address = input('Enter Your Address : ')
    admin = Admin(name=name,email=email,phone=phone,address=address)
    
    while True:
        print(f"Welcome {admin.name} !!")
        print('1. Add New Item')
        print('2. Add New Employee')
        print('3. View Employee')
        print('4. View Items')
        print('5. Delete Item')
        print('6. Exit')
        
        choice = int(input('Enter Your Choice : '))
        if choice == 1:
            item_name = input('Enter Item Name : ') 
            item_price = int(input('Enter Item Price : '))
            item_quantity = int(input('Enter Item Quantity : '))
            item = FoodItem(item_name,item_price,item_quantity)
            admin.add_new_item(al_madani,item)
        elif choice == 2:
            emp_name = input('Enter Employee Name : ')
            emp_phone = input('Enter Employee Phone : ')
            emp_email = input('Enter Employee Email : ')
            emp_address = input('Enter Employee Address : ')
            emp_designation = input('Enter Employee Designation : ')
            emp_age = int(input('Enter Employee Age : '))
            emp_salary = int(input('Enter Employee Salary : '))    
            
            employee = Employee(name = emp_name,email=emp_email,address=emp_address,phone=emp_phone,age = emp_age,designation=emp_designation,salary=emp_salary)
            
            admin.add_employee(al_madani,employee)
        elif choice == 3:
            admin.view_employee(al_madani)
        elif choice == 4:
            admin.view_menu(al_madani)
        elif choice == 5:
            item_name = input('Enter Item Name : ')
            admin.remove_item(al_madani,item_name)
        elif choice == 6:
            break
        else:
            print("Invalid Choice !!!")
            
               
        
        
while True:
    print('Welcome !!')
    print('1. Customer')
    print('2. Admin')
    print('3. Exit')
    choice = int(input('ENTER YOUR CHOICE : '))
    
    if choice == 1: 
        customer_menu()
    elif choice == 2:
        admin_menu()
    elif choice == 3:
        break
    else:
        print('INVALID CHOICE')
        
    