#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}