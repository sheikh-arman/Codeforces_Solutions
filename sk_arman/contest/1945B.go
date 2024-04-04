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
			a, b, c int64
			ans     int64
		)
		ans = 2
		fmt.Fscan(in, &a, &b, &c)
		ans += c / a
		ans += c / b
		fmt.Println(ans)
	}
}