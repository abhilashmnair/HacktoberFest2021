# A Linked List Node
class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next
 
 
# Recursive function to check if the linked list is a palindrome or not
def checkPalindrome(left, right):
 
    # base case
    if right is None:
        return True, left
 
    val, left = checkPalindrome(left, right.next)
 
    result = val and (left.data == right.data)
    left = left.next
 
    return result, left
 
 
# Function to check if the linked list is a palindrome or not
def checkPalin(head):
    return checkPalindrome(head, head)[0]
 
 
if __name__ == '__main__':
 
    # input keys
    keys = [1, 3, 5, 3, 1]
 
    head = None
    for i in reversed(range(len(keys))):
        head = Node(keys[i], head)
 
    if checkPalin(head):
        print("The linked list is a palindrome")
    else:
        print("The linked list is not a palindrome")
