package main

import (
	"fmt"
)

func main(){
	n := 0
	fmt.Scanln(&n)
	fmt.Println(collatzSequence(n))
}
func collatzSequence(n int)[]int{
	var list []int
	list = append(list,n)
	for n!=1{
		if n%2==0{
			n/=2
			list = append(list,n)
		}else{
			n=3*n+1
			list=append(list,n)
		}
	}
	return list
}
