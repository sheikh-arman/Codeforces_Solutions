#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a[1000],b[1000],s=0,s2=0,ck=1,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    for(int i=0;i<n;i++)cin>>b[i],s2+=b[i];
    for(int i=0;i<n;i++){
        if(b[i]==a[i]+1&&b[i+1]!=a[i+1]-1||b[i]>a[i]+1||b[i]<a[i]-1)
            ck=0;
        if(b[i]==a[i]-1)
            cnt++;
    }
    if(s2<=s||(ck&&s==s2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}