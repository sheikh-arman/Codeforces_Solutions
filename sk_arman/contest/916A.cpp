#include<bits/stdc++.h>
using namespace std;
int ck(int n){
    int c=0;
    while(n){
        if(n%10==7){
            c=1;
            break;
        }
        n/=10;
    }
    return c;
}
int main (){
    int n,h,m,i,a;
    cin>>n>>h>>m;
    for(i=0;;i++){
            a=h*100+m;
        if(ck(a)==1){
            break;
        }
        m=m-n;
        if(m<0){
            m=60-(-1*m);
            h--;
        }
        if(h<0){
            h=24-(-1*h);
        }
    }
    printf("%d\n",i);
    return 0;
}