package main

import "fmt"

func main() {
	var end int
	fmt.Print("Enter range of fibonacci series: ")
	fmt.Scan(&end)

	if end <= 0 {
		fmt.Println("Enter a positive range, greater than 0.")
		return
	}

	a, b, sum := 0, 1, 0

	for i := 1; i <= end; i++ {
		println(a)
		sum = a + b
		a = b
		b = sum
	}
}
