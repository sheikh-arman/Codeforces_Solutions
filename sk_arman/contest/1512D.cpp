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
        ll n,sum=0;
        cin>>n;
        vector<ll>V;
        for(ll i=0; i<n+2; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            sum+=a;
        }
        VST(V);
        ll ans=-1;
        ll tm_sum=sum;
        tm_sum-=V[n];
        for(ll i=0; i<n+2; i++)
        {
            if(i==n)continue;
            tm_sum-=V[i];
            if(tm_sum==V[n])
            {
                ans=i;
                break;
            }
            tm_sum+=V[i];
        }
        if(ans!=-1)
        {
            for(ll i=0; i<n+2; i++)
            {
                if(i!=ans&&i!=n)
                {
                    cout<<V[i]<<" ";
                }
            }
            cout<<"\n";
        }
        else
        {
            tm_sum=sum;
            tm_sum-=V[n+1];
            for(ll i=0; i<n+1; i++)
            {
                tm_sum-=V[i];
                if(tm_sum==V[n+1])
                {
                    ans=i;
                    break;
                }
                tm_sum+=V[i];
            }
            if(ans!=-1)
            {
                for(ll i=0; i<n+2; i++)
                {
                    if(i!=ans&&i!=n+1)
                    {
                        cout<<V[i]<<" ";
                    }

                }
                cout<<"\n";
            }
            else
            {
                cout<<"-1\n";
            }
        }
    }
    return 0;
}