class Menu:
    def __init__(self):
        self.items = []
        
    def add_items(self,item_obj):
        self.items.append(item_obj)
        
    def find_item(self,item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self,item_name):
        item = self.find_item(item_name)
        if item:
            self.items.remove(item)
            print('Item deleted')
            print()
        else:
            print("Item not found")
            print()
            
    def show_menu(self):
        print("******* Menu ********")
        print("\nName\tPrice\tQuantity")
        print('-------------------------')
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")