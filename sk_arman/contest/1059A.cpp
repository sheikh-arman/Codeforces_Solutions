#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,l,k,a,b,cnt=0,temp=0;
    cin>>n>>l>>k;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        temp=a-temp;
        cnt+=temp/k;
        temp=a+b;
    }
    cnt+=(l-temp)/k;
    cout<<cnt<<endl;
}