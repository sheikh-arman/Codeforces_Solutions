/*
    Sk arman Hossain
    University of Barisal

    Problem : Codeforces_327A
    Solution : DP
 */
#include<bits/stdc++.h>
#define PB push_back
typedef long long int ll;
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll n;
    cin>>n;
    ll V[110];
    ll ar[110];
    ar[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>V[i];
        ar[i]=V[i]+ar[i-1];
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
                ll tm=(j-i+1)-(ar[j]-ar[i-1]);
                    tm+=ar[n]-(ar[j]-ar[i-1]);
            ans=max(ans,tm);
        }
    }
    cout<<ans<<"\n";


///*****************************  ALHAMDULILLAH  *****************************/
}