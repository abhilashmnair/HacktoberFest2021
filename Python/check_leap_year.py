# leap year  
def CheckLeap(year):  
  # Checking if the given year is leap year  
  if((year % 400 == 0) or  
     (year % 100 != 0) and  
     (year % 4 == 0)):   
    print("This year is a leap Year");  
  # Else it is not a leap year  
  else:  
    print ("This year is not a leap Year")  
# Taking an input year from user  
year = int(input("Enter the number: "))  
# Printing result  
CheckLeap(year)  
