/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 40010
ll ar[4];
ll dp[N+10][4];
ll recur(ll i,ll n)
{
    if(i>2)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            return dp[n][i]=LONG_MIN;
        }
    }
    if(dp[n][i]!=0)
    {
        return dp[n][i];
    }
    ll ans1=0,ans2=LONG_MIN;
    ans1=recur(i+1,n);
    if(n-ar[i]>=0)
        ans2=1+recur(i,n-ar[i]);
    return dp[n][i]=max(ans1,ans2);
}
int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase=1;
    //cin>>tcase;
    for(ll TEST=1; TEST<=tcase; TEST++)
    {
        ll n;
        cin>>n>>ar[0]>>ar[1]>>ar[2];
        ll ans=recur(0,n);
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
    return 0;
}