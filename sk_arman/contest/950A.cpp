#include<bits/stdc++.h>
using namespace std;
int main (){
    int l,r,a,x,y,b,c;
    cin>>l>>r>>a;
    x=max(r,l);
    y=min(r,l);
    if(x-y<=a){
            c=x-y;
        b=a-c;
        b=b/2;
        b=(b+x)*2;
        cout<<b<<endl;
    }
    else
        cout<<(a+y)*2<<endl;
    return 0;
}