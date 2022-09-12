#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,mi,mx;
    cin>>n;
    mi=n/7;
    mi*=2;
    if(n%7==6)
        mi++;
    mx=n/7;
    mx*=2;
    if(n%7==1)
        mx++;
    else if(n%7>1)
        mx+=2;
    cout<<mi<<" "<<mx<<endl;
    return 0;
}