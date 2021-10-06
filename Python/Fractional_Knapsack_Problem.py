from functools import reduce


def sortvalues(costs: list, quant: list):
    n = len(costs)
    for i in range(n - 1): #Bubble sort
        for j in range(n - i - 1):
            if costs[j] < costs[j + 1]:
                costs[j], costs[j + 1] = costs[j + 1], costs[j]
                quant[j], quant[j + 1] = quant[j + 1], quant[j]
    return (costs, quant)


def knapsack(quant: list, costs: list, limit: int):
    costs, quant = sortvalues(costs, quant)

    value = 0
    while limit > 0:
        for i in range(len(costs)):
            if limit >= quant[i]:
                limit -= quant[i]
                value += costs[i]
            else:
                value += costs[i] * limit / quant[i]
                limit -= limit

    return round(value, 2)


costs = list(map(int, input("Enter the costs of items with a space in between:").split(" ")))
quant = list(map(int, input("Enter the quantity of items with a space in between:").split(" ")))
n = int(input("Enter the max no of items to be inserted into knapsack:"))
print(knapsack(quant, costs, n))
