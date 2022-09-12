#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,ans;
    cin>>n>>m;
    ans=min(n,m);
    cout<<(ans%2?"Akshat":"Malvika")<<endl;
    return 0;
}