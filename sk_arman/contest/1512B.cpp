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
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,ans;
        cin>>n;
        string s[440];
        vector<pair<ll,ll> >V;
        for(ll i=0; i<n; i++)
        {
            cin>>s[i];
            for(ll j=0; j<n; j++)
            {
                if(s[i][j]=='*')
                {
                    V.PB({i,j});
                }
            }
        }
        VST(V);
        if(V[0].first==V[1].first)
        {
            if(V[0].first==0)
            {
                s[1][V[0].second]='*';
                s[1][V[1].second]='*';
            }
            else
            {
                s[0][V[0].second]='*';
                s[0][V[1].second]='*';
            }
        }
        else if(V[0].second==V[1].second)
        {
            if(V[0].second==0)
            {
                s[V[0].first][1]='*';
                s[V[1].first][1]='*';
            }
            else
            {
                s[V[0].first][0]='*';
                s[V[1].first][0]='*';
            }
        }
        else
        {
            s[V[1].first][V[0].second]='*';
            s[V[0].first][V[1].second]='*';
        }
        for(ll i=0; i<n; i++)
        {
            cout<<s[i]<<"\n";
        }
    }
    return 0;
}