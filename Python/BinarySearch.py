"""
Debajyoti Das
https://github.com/debajyoti22

Binary Search is a simple search technique for a sorted array by repeatedly dividing the search interval in half

""" 


def binary(a,x):
    first = 0
    last = len(a)-1 
    
    while(first<=last):
        mid = (first+last)//2
        
        if (x == a[mid]):
            print("Found at position %d " %(mid))         
            return -1           
        elif(x<a[mid]):
            last = mid-1;
        elif(x>a[mid]):
           first = mid+1;
                
    print("Not found ")
    
        
a = [] 
size = int(input("Enter size of list: "))
 
for n in range(size):
    n = int(input("Enter value at %d: "%(n)))
    a.append(n)
 
a.sort()

x =int(input("Enter number to be searched = "))
binary(a,x)
            
