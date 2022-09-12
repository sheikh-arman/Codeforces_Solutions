#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,h,a,ans=0;
    cin>>n>>h;
    while(n--){
        cin>>a;
        if(a<=h)
            ans++;
        else
            ans+=2;
    }
    cout<<ans<<endl;
}