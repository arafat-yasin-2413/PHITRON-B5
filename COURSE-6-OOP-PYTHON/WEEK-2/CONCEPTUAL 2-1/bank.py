from abc import ABC,abstractmethod

class Account:
    accounts = [] #class property
    
    def __init__(self,name,accNo,passwd,type):
        self.name = name
        self.accNo = accNo
        self.passwd = passwd
        self.type = type
        self.balance = 0
        
        Account.accounts.append(self)
        # Object property access korte hoy "self" likhe
        # Class property access korte hoy "class er naam" likhe
        
        
    def changeInfo(self,newName):
        self.name = newName
        
    def changeInfo(self,newName,newPass):
        self.name = newName
        self.passwd = newPass
        
    def deposit(self,amount):
        if(amount>0):
            self.balance += amount
            
    def withdraw(self,amount):
        if( (amount > 0) and (amount<=self.balance)):
            self.balance -= amount
    
    @abstractmethod            
    def showInfo(self):
        pass


class SavingsAccount(Account):
    def __init__(self, name, accNo, passwd, int_rate):
        super().__init__(name, accNo, passwd, "Savings") 
        self.int_rate = int_rate
        
    def showInfo(self):
        # return super().showInfo()
        print(f'Account Holder\'s Name : {self.name}')
        print(f'Account Type : {self.type}')
        
class SpecialAccount(Account):
    def __init__(self, name, accNo, passwd, limit):
        super().__init__(name, accNo, passwd, "Special")
        self.limit = limit
        
        
    def showInfo(self):
        return super().showInfo()
    
    def withdraw(self, amount):
        if amount > 0 and amount <= self.limit:
            self.balance -= amount
            
            
    