#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,b,c=0,d=0,x=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        d=d-a;
        d=d+b;
        if(d<0){
            d=0;
        }
        if(d>x){
            x=d;
        }
    }
    cout<<x<<endl;
    return 0;
}