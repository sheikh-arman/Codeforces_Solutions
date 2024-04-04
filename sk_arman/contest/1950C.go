package main

import (
	"bufio"
	"fmt"
	"os"
	"time"
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
			n string
		)
		fmt.Fscan(in, &n)
		parsedTime, _ := time.Parse("15:04", n)
		twelveHourFormat := parsedTime.Format("03:04 PM")
		fmt.Println(twelveHourFormat)
	}
}