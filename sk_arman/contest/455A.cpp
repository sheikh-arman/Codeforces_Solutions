/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : dp
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 100010
ll ar[N+10];
//ll dp[N+10][4];
//vector<ll>V,cnt;
//ll recur(ll i,ll n)
//{
//    if(i>2)
//    {
//        if(n==0)
//        {
//            return 0;
//        }
//        else
//        {
//            return dp[n][i]=LONG_MIN;
//        }
//    }
//    if(dp[n][i]!=0)
//    {
//        return dp[n][i];
//    }
//    ll ans1=0,ans2=LONG_MIN;
//    ans1=recur(i+1,n);
//    if(n-ar[i]>=0)
//        ans2=1+recur(i,n-ar[i]);
//    return dp[n][i]=max(ans1,ans2);
//}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase=1;
    //cin>>tcase;
    for(ll TEST=1; TEST<=tcase; TEST++)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            ar[a]+=a;
        }
        for(ll i=2;i<=100000;i++){
            ar[i]=max(ar[i-1],ar[i-2]+ar[i]);
        }
        cout<<ar[100000]<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
    return 0;
}