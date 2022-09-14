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
ll ar[10010];
ll ans[10010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    // fast;
    fflush(stdout);
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,x;
        cin>>n;
//        cout<<"? 1"<<"\n";
//        cin>>x;
        for(ll i=0; i<=n; i++)
        {
            ar[i]=0;
        }
        ll cnt=0,pos=1;
        vector<ll>V;
        for(ll i=1; i<2*n; i++)
        {
            V.clear();
            ll val;
            while(pos<=n)
            {
                cout<<"? "<<pos<<"\n";
                cin>>val;
                if(ar[val]==1)
                {
                    break;
                }
                else
                {
                    V.PB(val);
                    ar[val]=1;
                }
            }
            if((ll)V.size()>0)
            {
                if(V.size()==1)
                {
                    ans[V[0]]=V[0];
                    V.clear();
                }
                else
                {
                    ll siz=V.size();
                    for(ll i=siz-1; i>0; i--)
                    {
                        ans[V[i-1]]=V[i];
                    }
                    ans[V[siz-1]]=V[0];
                    V.clear();
                }
            }
            while(ar[pos]!=0)
            {
                pos++;
            }
            if(pos>n)break;
        }
        cout<<"! ";
        for(ll i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}