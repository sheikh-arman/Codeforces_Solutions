#include<bits/stdc++.h>
using namespace std;
int dp[2000];
vector<int>v;
vector<int>v2;
int main (){
    int n,k,ar[2002],ar2[2002],ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar2[i]=ar[i];
    }
    sort(ar2,ar2+n);
    for(int i=n-1;i>=n-k;i--){
        ans+=ar2[i];
        v2.push_back(ar2[i]);
    }
   int cnt=0,ck;
   int l3=v2.size();
   for(int i=0;i<n;i++){
        cnt++;
        for(int j=0;j<l3;j++){
            if(ar[i]==v2[j]){
             v.push_back(cnt);
             v2[j]=-1111111;
            // cout<<ar[i]<<endl;
            cnt=0;
            ck=i+1;
            break;
        }
        }
   }
    cout<<ans<<endl;
    int l=v.size();
    v[l-1]=v[l-1]+(n-ck);
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}