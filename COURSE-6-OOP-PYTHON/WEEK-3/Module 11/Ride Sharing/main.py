from ride import Ride,RideRequest,RideMatching, RideSharing
from users import User,Rider,Driver
from vehicle import Vehicle,Car,Bike


niye_jao = RideSharing('Niye Jao')

# print(niye_jao)


rahim = Rider('Rahim Uddin','rahim@gmail.com',4433222,'Mohakhali',1200)
niye_jao.add_rider(rahim)



kolimuddin = Driver('Kolim Uddin','kolim@gmail.com',38673227,'Gulshan')
niye_jao.add_driver(kolimuddin)


rahim.request_ride(niye_jao,'Uttara','car')
kolimuddin.reach_destination(rahim.current_ride)
rahim.show_current_ride()


# print(niye_jao)

