#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
//vector<ll>divisor[200010];
//void seive()
//{
//    for(ll i=1; i<=200000; i++)
//    {
//        for(ll j=i; j<=200000; j+=i)
//        {
//            divisor[j].PB(i);
//        }
//    }
//}
vector<ll>varsity[200010];
ll ar[200010];
ll tm_sum[200010];
int main()
{
   // freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>stu;
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            stu.PB(a);
            st.insert(a);
            ar[i+1]=0;
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            ll var=stu[i];
            varsity[var].PB(a);
        }
        vector<ll>uniq_var;
        for(ll i:st)
        {
            uniq_var.PB(i);
        }
        for(ll i:uniq_var)
        {
            VST(varsity[i]);
            reverse(varsity[i].begin(),varsity[i].end());
            ll sum=0;
            ll siz=varsity[i].size();
            ll cn=0;
            for(ll j:varsity[i])
            {
                sum+=j;
                tm_sum[cn++]=sum;
            }
            for(ll j=1; j<=siz; j++)
            {
                ll tm=siz%j;
                ll baki=tm_sum[siz-tm-1];
                ar[j]+=baki;
            }
        }

        for(ll i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
        for(ll i:uniq_var)
        {
            varsity[i].clear();
        }
    }
    return 0;
}