package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	in  = bufio.NewReader(os.Stdin)
	out = bufio.NewWriter(os.Stdout)
)

func main() {
	defer func() {
		out.Flush()
	}()
	tcase := 0
	fmt.Fscan(in, &tcase)
	for test := 0; test < tcase; test++ {
		var (
			a, b, c int
		)
		fmt.Fscan(in, &a, &b, &c)
		if a < b && b < c {
			fmt.Println("STAIR")
		} else if b > a && b > c {
			fmt.Println("PEAK")
		} else {
			fmt.Println("NONE")
		}
	}
}