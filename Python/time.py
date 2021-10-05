#This python script makes a GET request to worldtimeapi.org and parses the response to show date ad time in Kolkata, India.
#Requirements : requests

import requests #requests module for GET request

response = requests.get("http://worldtimeapi.org/api/timezone/Asia/Kolkata") #make a get request to worldtimeapi.org

dt = response.json()['utc_datetime'] #parse inJSON and save the date time field

#print relevant substrings
print("Date:", dt[0:10])
print("Time:", dt[11:19])