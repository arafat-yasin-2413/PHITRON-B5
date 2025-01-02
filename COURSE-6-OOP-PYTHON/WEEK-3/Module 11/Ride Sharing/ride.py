from datetime import datetime
from vehicle import Vehicle,Car,Bike



class RideSharing:
    def __init__(self,company_name):
        self.company_name = company_name
        self.riders = []
        self.drivers = []
        self.rides = []
        
    def add_rider(self,rider):
        self.riders.append(rider)
        
    def add_driver(self,driver):
        self.drivers.append(driver)
        
    def __repr__(self):
        return f"Company Name : {self.company_name}. with riders : {len(self.riders)} and drivers : {len(self.drivers)}"

class Ride:
    def __init__(self,start_location,end_location,vehicle):
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None 
        self.estimated_fare = self.calculate_fare(vehicle.vehicle_type)
        self.vehicle = vehicle
        
        
    def set_driver(self,driver):
        self.driver = driver
        
    def start_ride(self):
        self.start_time = datetime.now()
        
    def end_ride(self):
        self.end_ride = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
        
        
    # total fare
    def calculate_fare(self, vehicle):
        distance = 10
        fare_per_km = {
            'car':30,
            'bike':20,
            'cng':25
        }
        return distance * fare_per_km.get(vehicle)
        
        
    def __repr__(self):
        return f"Ride Details. Started : {self.start_location} to {self.end_location}."
            
    
    
class RideRequest:
    def __init__(self,rider,end_location):
        self.rider = rider
        self.end_location = end_location
        

class RideMatching:
    def __init__(self,drivers):
        self.availabled_drivers = drivers
        
    def find_driver(self,ride_request,vehicle_type):
        if len(self.availabled_drivers) > 0:
            print('Looking for drivers ...')
            driver = self.availabled_drivers[0]
            
            if vehicle_type == 'car':
                vehicle = Car('car','ABC456',30)
            elif vehicle_type == 'bike':
                vehicle = Bike('bike','1234BH',50)
            ride = Ride(ride_request.rider.current_location,ride_request.end_location,vehicle)
            driver.accept_ride(ride)
            return ride
        
            
            