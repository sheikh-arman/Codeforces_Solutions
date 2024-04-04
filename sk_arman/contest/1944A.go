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
			k, n int
		)
		fmt.Fscan(in, &n, &k)
		if k >= n-1 {
			fmt.Println("1")
		} else {
			fmt.Println(n)
		}
	}
}