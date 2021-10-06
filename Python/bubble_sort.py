# Bubble Sort

def bubbleSort(arr):
	n = len(arr)

	
	for i in range(n-1):
	# range(n) also work but outer loop will repeat one time more than needed.

		
		for j in range(0, n-i-1):
			if arr[j] > arr[j + 1] :
				arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Driver code 
arr = [64, 34, 25, 12, 22, 11, 90]

bubbleSort(arr)

print ("Sorted array is:")
for i in range(len(arr)):
	print ("% d" % arr[i]),
