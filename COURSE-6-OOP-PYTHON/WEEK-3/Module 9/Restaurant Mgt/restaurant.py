from menu import Menu

class Restaurant:
    def __init__(self,name):
        self.name = name
        self.employees = []
        self.menu = Menu()
        
    def add_employee(self,emp_obj):
        self.employees.append(emp_obj)
        
    def view_employees(self):
        print()
        print("-------- Employee List ---------")
        print()
        
        for emp in self.employees:
            print(emp.name, emp.email, emp.phone, emp.address)
         
        
  