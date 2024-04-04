package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var (
	in  = bufio.NewReader(os.Stdin)
	out = bufio.NewWriter(os.Stdout)
	ar  [100010]int
)

func main() {
	defer func() {
		out.Flush()
	}()
	tcase := 0
	fmt.Fscan(in, &tcase)
	for test := 0; test < tcase; test++ {
		var (
			n int
		)
		fmt.Fscan(in, &n)

		for i := 0; i < n; i++ {
			fmt.Fscan(in, &ar[i])
		}
		sort.Ints(ar[0:n])
		mid := (n - 1) / 2
		ans := 0
		for i := mid; i < n; i++ {
			if  ar[i] > ar[mid] {
				break
			}
			ans++
		}
		fmt.Println(ans)
	}
}