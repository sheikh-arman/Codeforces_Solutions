#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);

int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;

    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>V;
        map<ll,ll>mp,mp2;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            sum+=a;
            V.PB(a);
            mp[a]++;
        }
        VST(V);
        n-=1;
        priority_queue<ll>pq;
        pq.push(sum);
        mp2[sum]=1;
        ll ck=1;
        while(n--)
        {
            ll tm=pq.top();
            pq.pop();
            //cout<<tm<<" ";
            ll val_new=mp2[tm];
            ll val_old=mp[tm];
            //cout<<val_new<<" "<<val_old<<" x ";
            if(val_new==val_old)
            {
                n++;
                continue;
            }
            else
            {
                if(val_new<val_old)
                {
                    ck=0;
                    break;
                }
                else
                {
                    mp2[tm]--;
                    ll x=tm/2;
                    if(tm%2==0)
                    {
                        mp2[x]+=2;
                        pq.push(x);
                        pq.push(x);
                       // cout<<tm<<" "<<tm/2<<" x\n";
                    }
                    else
                    {
                        mp2[x]++;
                        mp2[x+1]++;
                        pq.push(x);
                        pq.push(x+1);
                        //cout<<tm<<" "<<x<<"\n";
                    }
                }
            }
        }
        if(ck)
        {
            for(ll i:V)
            {
                if(mp2[i]!=mp[i])
                {
                    ck=0;
                    //cout<<"\n"<<i<<" "<<mp2[i]<<" "<<mp[i];
                    break;
                }
            }
        }
        if(ck)
        {
            YES;
        }
        else
        {
            NO;
        }


    }
    return 0;
}