#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    //freopen("1input.txt","r",stdin);
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,ans;
        cin>>n;
        vector<pair<ll,ll> >V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB({a,i+1});
        }
        VST(V);
        if(V[0].first==V[1].first){
           cout<< V[n-1].second<<"\n";
        }
        else{
            cout<<V[0].second<<"\n";
        }
    }
    return 0;
}