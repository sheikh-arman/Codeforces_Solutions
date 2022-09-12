#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,b,ans=0;
    cin>>n>>m;
    a=1;
    for(int i=0;i<m;i++){
        cin>>b;
        if(a>b){
            ans+=abs(n-a)+abs(1-b)+1;
        }
        else{
        ans+=abs(a-b);
        }
        a=b;
    }
    cout<<ans<<endl;
    return 0;
}