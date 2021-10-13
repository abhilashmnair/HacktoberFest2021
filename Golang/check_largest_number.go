package main

import "fmt"

func main() {
	// check the largest number
	var num[100] int
	var total int
	fmt.Print("enter the number of many elements: ")
	fmt.Scanln(&total)
	for x := 0; x < total; x++ {
		fmt.Print("Enter the number : ")
		fmt.Scan(&num[x])
	}
	for k := 1; k < total; k++ {
		if( num[0] < num[k] ) {num[0] = num[k]}

	}

	fmt.Print("The largest number is : ",num[0])
}

