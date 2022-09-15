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
ll ar[300010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        string ch,s;
        cin>>n>>ch;
        cin>>s;
        ll ck=0,pos;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            if(s[i]!=ch[0])
            {
                ck++;
                pos=i+1;
                V.PB(i+1);
            }
        }
        if(ck==0)
        {
            cout<<"0\n";
        }
        else
        {
            if(ck==1)
            {
                cout<<"1\n";
                if(pos==n)
                {
                    cout<<pos-1<<"\n";
                }
                else
                {
                    cout<<pos+1<<"\n";
                }
            }
            else
            {
                ll ck_seive=0,val;
                for(ll i=2; i<=n; i++)
                {
                    if(s[i-1]==ch[0])
                    {
                        ll hi=0;
                        for(ll j=(i+i)-1; j<n; j+=i)
                        {
                            //cout<<s[j]<<" x\n";
                            if(s[j]!=ch[0])
                            {
                                hi=1;
                                break;
                            }
                        }
                        if(hi==0)
                        {
                            val=i;
                            ck_seive=1;
                            break;
                        }
                    }
                }
                if(ck_seive==1)
                {
                    cout<<"1\n";
                    cout<<val<<"\n";
                }
                else
                {
                    cout<<"2\n";
                    cout<<n<<" "<<n-1<<"\n";

                }
            }
        }
    }
    return 0;
}