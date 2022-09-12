#include<bits/stdc++.h>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define vst(v) sort(v.begin(),v.end())
typedef long long int ll;
using namespace std;
vector<ll>v,v2,v3;
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    while(tcase--)
    {
        v.clear();
        ll n,ans,k,a,ans2,tmp,cnt=0;
        ll ck=0,cn2=0;
        sffl(n,k);
        for(ll i=0; i<n; i++)
        {
            sfl(a);
            v.pb(a);
            if(a%2!=0)
            {
                cnt++;
            }
        }
        if(cnt>=k)
        {
            ll x=k-cnt;
            if(x%2==0)
            {
                k--;
                yes;
                for(ll i=0; i<n-1; i++)
                {
                    if(v[i]%2!=0&&k)
                    {
                        printf("%lld ",i+1);
                        k--;
                    }

                }
                printf("%lld\n",n);
            }
            else
            {
                no;
            }

        }
        else
        {
            no;
        }

        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}