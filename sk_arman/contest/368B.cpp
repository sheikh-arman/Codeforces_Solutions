/*
    Sk arman Hossain
    University of Barisal

    Problem : 368 B. Sereja and Suffixes
    Solution : DP
 */
#include<bits/stdc++.h>
#define PB push_back
typedef long long int ll;
using namespace std;
ll ar[100010];
ll ans[100010];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll n,q;
    cin>>n>>q;
    vector<ll>V(n);
    for(ll i=0;i<n;i++){
        cin>>V[i];
    }
    ll cnt=0;
    for(ll i=n-1;i>=0;i--){
        if(!ar[V[i]]){
            ar[V[i]]=1;
            cnt++;
        }
        ans[i+1]=cnt;
    }

    for(ll i=0;i<q;i++){
        ll a;
        cin>>a;
        cout<<ans[a]<<"\n";
    }

///*****************************  ALHAMDULILLAH  *****************************/
}