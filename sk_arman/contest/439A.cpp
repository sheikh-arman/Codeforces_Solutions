#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,ans=0,cnt=0,k,sum=0,a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
            cin>>a;
          sum+=a;
    }
    sum+=10*(n-1);
    if(sum>k)
        cout<<-1<<endl;
    else{
        ans=(k-sum)/5;
        ans+=(n-1)*2;
        cout<<ans<<endl;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}