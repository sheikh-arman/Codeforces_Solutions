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
		if b%3 != 0 && 3-(b%3) > c {
			fmt.Println("-1")
		} else {
			fmt.Println(a + (b+c+2)/3)
		}
	}
}