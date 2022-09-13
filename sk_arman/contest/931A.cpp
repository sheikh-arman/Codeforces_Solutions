#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d,e;
    cin>>a>>b;
    c=fabs(a-b);
    d=c/2;
    e=(d*(d+1))/2;
    e*=2;
    if(c%2==0)
        cout<<e<<endl;
    else
        cout<<e+d+1<<endl;
    return 0;
}