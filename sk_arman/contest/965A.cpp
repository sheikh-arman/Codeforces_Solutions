#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    double m,ans,c,ns;
    ns=ceil(double(n)/s);
    m=k*ns;
    ans=ceil(m/p);
    cout<<int(ceil(ans))<<endl;
    return 0;
}