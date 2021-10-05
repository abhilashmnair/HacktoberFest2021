#code for binary search in a list in python language by Amitlpu-840
def binary_search(list1, n):
    loww = 0
    high = len(list1) - 1
    mid = 0

    while loww <= high:

        mid = (high + loww) // 2

        if list1[mid] < n:
            loww = mid + 1

        elif list1[mid] > n:
            high = mid - 1

        else:
            return mid

    return -1


listA = []

n = int(input("Enter number of elements in the list : "))

for i in range(0, n):
    print("Enter element No-{}: ".format(i + 1))
    elm = int(input())
    listA.append(elm)
print("The entered list is: \n", listA)
n = int(input("Enter number to be searched :"))


result = binary_search(listA, n)

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in list1")
