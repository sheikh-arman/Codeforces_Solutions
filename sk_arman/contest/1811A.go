package main

import (
	"bufio"
	"os"
	"fmt"

)
var (
	in=bufio.NewReader(os.Stdin)
	out=bufio.NewWriter(os.Stdout)
)
func main(){
	defer func() {
		out.Flush()
	}()
	tcase:=0
	fmt.Fscan(in,&tcase)
	for test:=0;test<tcase;test++ {
		var s string
		var (d,n int)
		fmt.Fscan(in,&n,&d,&s)
		len:=len(s)
		i:=0
		for i<len {
			v := s[i]-48
			if(int(v)<d){
				fmt.Fprintf(out,"%v",d)
				break
			}
			fmt.Fprintf(out,"%v",s[i]-48)
			i++;
		}
		if i<len {
			for i<len {
				fmt.Fprintf(out,"%v",s[i]-48)
				i++;
			}
			fmt.Fprintf(out,"\n")
		}else{
			fmt.Fprintf(out,"%v\n",d)
		}
	}
}