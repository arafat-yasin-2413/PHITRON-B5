class Product:
    def __init__(self,item_name,price,quantity):
        self.item_name = item_name
        self.price = price
        self.quantity = quantity
        
    def __repr__(self):
        return f'{self.item_name} -> {self.price} -> {self.quantity}'
    
    
class Shop:
    def __init__(self,name):
        self.name = name
        self.inventory = {}
        
    def __repr__(self):
        return f'Shop Name : {self.name}'
    
    def add_product(self,product):
        if product.item_name in self.inventory:
            self.inventory[product.item_name].quantity += product.quantity
        else:
            self.inventory[product.item_name] = product
        print(f"Added {product.quantity} of {product.item_name}")
            
    def show_inventory(self):
        for key,val in self.inventory.items():
            print(f"{key} : {val}")
        
    
    
    def buy_product(self,name,quantity):
        if name in self.inventory:
            product = self.inventory[name]
            if product.quantity >= quantity:
                product.quantity -= quantity
                print(f"Successfully bought {quantity} of {name}")
                if product.quantity == 0:
                    del self.inventory[name]
            else:
                print(f"Not Enough {name}. Available quantity : {product.quantity}")
        else:
            print(f"{name} is not available here.")
            
            
    
notebook = Product('Notebook',300,5)
notebook2 = Product('Notebook2',400,6)
shop1 = Shop('Alibaba Accessories')
# print(notebook)        
# print(shop1)

shop1.add_product(notebook)
shop1.add_product(notebook2)
shop1.show_inventory()

shop1.buy_product(notebook.item_name,20)
shop1.show_inventory()

        
        
