
# reverse a string using loop
  
def reverse(s):
  str = ""
  for i in s:
    str = i + str
  return str
  
s = "HelloWorld"
  
print ("The original string  is : ",end="")
print (s)
  
print ("The reversed string is : ",end="")
print (reverse(s))
