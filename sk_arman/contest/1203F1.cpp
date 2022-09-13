/*
    Sk arman Hossain
    University of Barisal

    Problem : Codeforces 1203F2
    Solution : DP(knapsack)
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<pair<ll,ll> >V,V2;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll r,n;
    cin>>n>>r;
    for(ll i=0; i<n; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(b<0)
        {
            V.push_back({a,b});
        }
        else
            V2.push_back({a,b});
    }
    sort(V2.begin(),V2.end());
    sort(V.begin(),V.end(),[&](pair<ll,ll>a,pair<ll,ll>b)
    {
        return (a.first+a.second)>(b.first+b.second);
    });
    ll siz=V2.size(),ans=0;
    for(ll i=0; i<siz; i++)
    {
        if(V2[i].first<=r)
        {
            r+=V2[i].second;
        }
        else{
            cout<<"NO\n";return 0;
        }
    }
    siz=V.size();
    for(ll i=0; i<siz; i++)
    {
        if(V[i].first<=r&&r+V[i].second>=0)
        {
            r+=V[i].second;
        }
        else{
            cout<<"NO\n";return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}