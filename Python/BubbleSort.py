def bubble_sort(my_list):
    for i in range(len(my_list)):
        for j in range(len(my_list) - 1):
            if my_list[j] > my_list[j+1]:
                my_list[j], my_list[j+1] = my_list[j+1], my_list[j]

my_list = [30, 12, 6, 2, 10, 8]
bubble_sort(my_list)
print(my_list)
