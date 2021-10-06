def sentinelSearch(l1, searchElement):
    l2 = l1.copy()
    l2.append(searchElement)
    index = 0
    while l2[index] != searchElement:
        index += 1
    if index + 1 < len(l2):
        print(f"the element is  at index no. {index}")
    else:
        print("The element is not in the list")

def main():
    lst = [] 
    size = int(input("Enter size of list: "))
 
    for i in range(size):
        i = int(input("Enter value at %d: "%(i)))
        lst.append(i)
    
    element = int(input("Enter the element you want to search in the list: "))
    sentinelSearch(lst,element)


main()
