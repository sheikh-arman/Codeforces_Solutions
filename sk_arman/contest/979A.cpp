#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n;
    cin>>n;
    if(n%2||n==0)
        cout<<(n+1)/2<<endl;
    else
        cout<<n+1<<endl;
}