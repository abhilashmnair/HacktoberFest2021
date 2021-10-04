package main

import "fmt"

func main() {
	var end int
	fmt.Print("Enter range end: ")
	fmt.Scan(&end)

	for i := 0; i <= end; i++ {
		if (i%3 == 0) && (i%5 == 0) {
			fmt.Println(i, "fizzbuzz")
		} else if i%3 == 0 {
			fmt.Println(i, "fizz")
		} else if i%5 == 0 {
			fmt.Println(i, "buzz")
		}
	}
}
