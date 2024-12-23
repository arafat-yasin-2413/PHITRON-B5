

class Library:
    book_list = []
    my_dict = {}
    
    def __init__(self,lib_name):
        self.lib_name = lib_name
        
    def entry_book(self,book_object):
        Library.book_list.append(book_object)
        
        # storing all books iin dictionary
        for book in Library.book_list:
            k = book.get_book_title()
            val = book.get_availability()
            Library.my_dict[k] = val
            
        
    def view_all_books(self):
        print("\n\t\t\t\tAll Books\n")
        print('\t Book Title \t Book Id \t Author \t Availability')
        print('---------------------------------------------------------------------')
        for book in Library.book_list:
            print(f'{book.get_book_title()} \t {book.get_book_id()} \t\t {book.get_author()} \t {book.get_availability()}')
        # print(Library.my_dict)
        # print()
        # print(f'Book Info')
        # print('------------------------------')
        # print()
        # for key,val in Library.my_dict.items():
        #     print(f'{key} ::: {val}')
        # print('------------------------------')
        # print()
        
class Book:
    def __init__(self,book_id,title,author,availability):
        self._book_id = book_id
        self._title = title
        self.__author = author
        self.__availability = availability
        
    def __repr__(self):
        return f'{self._title} : {self.__availability}'
        
    def get_book_id(self):
        return self._book_id
    
    def get_book_title(self):
        return self._title
    
    def get_author(self):
        return self.__author
    
    def get_availability(self):
        return self.__availability
    
    def borrow_book(self):
        if self.__availability is True:
            self.__availability = False
            print(f"Book id \'{self._book_id}\' has been borrowed successfully")
        else:
            print(f"Book id \'{self._book_id}\' is Already Borrowed to Someone, current avalibility : {self.__availability}")
            
            
    
    def return_book(self):
        if self.__availability is False:
            self.__availability = True
            print(f"Book id : {self.get_book_id()} has been Returned Successfully")
        else:
            print(f"This Book id : {self._book_id} can't be Returned. Nobody borrowed it.current avalibility : {self.__availability}")
            
    def check_availability(self):
        print(f"{self._title} : {self.__availability}")
        
        
    def view_book_info(self):
        print()
        print(f'\t\t\tShowing info of {self._book_id}\n')
        # for book in Library.book_list:
            # print(f'{book.get_book_title()}     -> {book.get_book_id()}    -> {book.get_author()}    -> {book.get_availability()}')
        # print(Library.my_dict)
        print('\t Book Title \t Book Id \t Author \t Availability')
        print('-------------------------------------------------------------------')
        print(f'{self.get_book_title()} \t {self.get_book_id()} \t\t {self.get_author()} \t {self.get_availability()}')
        print()
        print('-------------------------------------------------------------------')



# --------------------------------------------------------------------------------------------------------------------------------------------






savar_lib = Library('Savar Central Library')        

bela = Book(101,'Bela Furabar Agee','Arif Ajad',True)
jibon = Book(102,'Jibon Jekhane jemon','Arif Ajad2',False)
golpogulo = Book(103,'Golpogulo Onno Rokom ','Arif Ajad3',True)
bank = Book(104,'Bank and Money System','Mohaimeen',True)
dopamin = Book(105,'Dopamin Detox for','Thebo Meris',True)


# print(bank._book_id)
# print(bank._title)

# print(bank.get_author())
# print(bank.get_availability())



# print(golpogulo)

""" ----------------- 3. Entry Books ------------------- """        
savar_lib.entry_book(bela)
savar_lib.entry_book(jibon)
savar_lib.entry_book(golpogulo)
savar_lib.entry_book(bank)
savar_lib.entry_book(dopamin)




# savar_lib.show_all_books_details()

# dopamin.borrow_book()
# dopamin.borrow_book()

# dopamin.return_book()
# dopamin.check_availability()




# jibon.view_book_info()



while True:
    print("\nLibrary Menu System")
    print("1. View All Books")
    print("2. Borrow Book")
    print("3. Return Book")
    print("4. Exit")
    
    operation = int(input('Enter your choice : '))
    
    if operation == 1:
        savar_lib.view_all_books()
    
    elif operation == 2:
        id = int(input('Enter book id to borrow : '))
        
        
        isValidBookId = False
        
        for book in Library.book_list:
            if book.get_book_id() == id:
                isValidBookId = True
                book.borrow_book()
            
        if isValidBookId is False:
            print(f"The given book id {id} is Invalid\n")
                   
    
    elif operation == 3:
        id = int(input('Enter book id to return : '))
        
        isValidBookId = False
        
        for book in Library.book_list:
            if book.get_book_id() == id:
                isValidBookId = True
                book.return_book()
              
        if isValidBookId is False:
            print(f"The given book id {id} is Invalid\n")
    
    elif operation == 4:
        print('Exiting Library')
        break
    
    else:
        print("Invalid Choice")