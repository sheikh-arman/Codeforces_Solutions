#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,s2;
    int n,ans=0;
    cin>>n>>s>>s2;
    for(int i=0;i<n;i++){
        int x=s[i]-48;
        int y=s2[i]-48;
        if(y>x)swap(x,y);
        ans+=min(abs(x-y),min(((10-x)+y),(x+y)));
    }
    cout<<ans<<endl;


}