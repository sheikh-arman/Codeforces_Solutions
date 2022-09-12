#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pfn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v2,v3,sum;
vector<pair<ll, ll> >v, v1;
map<ll,ll>m;
pair<ll,ll>p;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
        ll t;
        cin>>t;
        for(ll i=0; i<t; i++)
        {
            ll tmp;
            cin>>tmp;
            //p=make_pair(tmp,i);
            v.push_back({tmp,i});
        }
        v1=v;
        vst(v1);
        sum.push_back(v1[0].first);
        ll keep=v1[0].first;
        for(ll i=1; i<t; i++)
        {
            ll tmp=v1[i].first;
            tmp+=sum[i-1];
            sum.push_back(tmp);
        }
        for(ll i=0; i<t-1; i++)
        {
            ll ans=sum[t-1];
            ans-=v1[i].first;
            if(ans%2==0)
            {
                ans/=2;
                if(ans==v1[t-1].first)
                {
                    v3.push_back(v1[i].second);
                }
            }
        }
        ll ans=sum[t-1];
        ans-=v1[t-1].first;
        if(ans%2==0)
        {
            ans/=2;
            if(ans==v1[t-2].first)
            {
                v3.push_back(v1[t-1].second);
            }
        }
        vst(v3);
        cout<<v3.size()<<endl;
        for(ll i=0; i<v3.size(); i++)
        {
            cout<<v3[i]+1<<" ";
        }
        cout<<endl;
   // }
///*****************************  ALHAMDULILLAH  *****************************/
}