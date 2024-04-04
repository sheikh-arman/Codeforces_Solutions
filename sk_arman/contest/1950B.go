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
			n int
		)
		fmt.Fscan(in, &n)
		for i := 0; i < n; i++ {
			if i%2 == 0 {
				for j := 0; j < n; j++ {
					if j%2 == 0 {
						fmt.Print("##")
					} else {
						fmt.Print("..")
					}
				}
				fmt.Println("")
				for j := 0; j < n; j++ {
					if j%2 == 0 {
						fmt.Print("##")
					} else {
						fmt.Print("..")
					}
				}
				fmt.Println("")
			} else {
				for j := 0; j < n; j++ {
					if j%2 == 1 {
						fmt.Print("##")
					} else {
						fmt.Print("..")
					}
				}
				fmt.Println("")
				for j := 0; j < n; j++ {
					if j%2 == 1 {
						fmt.Print("##")
					} else {
						fmt.Print("..")
					}
				}
				fmt.Println("")
			}
		}
	}
}