package main
import "fmt"

func gcd(a, b int)(int){
	if b==0 {
		return a
	}
	return gcd(b, a%b)
}

func main(){
	var a, b int
	fmt.Print("Enter 2 numbers \n")
	fmt.Scan(&a)
	fmt.Scan(&b)

	ans := gcd(a,b)

	fmt.Println(" GCD = ", ans)
}