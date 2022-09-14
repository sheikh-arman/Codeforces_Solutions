/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) cin>>n
#define sf2(n, m) cin>>n>>m
#define sf3(n, m,k ) cin>>n>>m>>k
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
typedef long long ll;
using namespace std;
vector<ll>edj[1010],len[1010],V;
ll root,fixed_len;
void dfs(ll node,ll cnt,ll parent,ll ck)
{
    for(ll i:edj[node])
    {
        if(parent!=i)
        {
            if(ck==1)
            {
                len[cnt+1].PB(i);
            }
            else
            {
                if(cnt+1==fixed_len)
                {
                    V.PB(i);
                }
            }
            dfs(i,cnt+1,node,ck);
        }
    }
}
void query(ll n)
{
    ll siz=len[n].size();
    cout<<"? "<<siz;
    for(ll i:len[n])
    {
        cout<<" "<<i;
    }
    nl;
}
int main()
{
    cout.flush();
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<=1000; i++)
        {
            len[i].clear();
            edj[i].clear();
        }
        V.clear();

        for(ll i=1; i<n; i++)
        {
            ll u,v;
            cin>>u>>v;
            edj[u].PB(v);
            edj[v].PB(u);
        }

        cout<<"? "<<n;
        for(ll i=1; i<=n; i++)cout<<" "<<i;
        nl;
        cin>>root>>fixed_len;
        dfs(root,0,-1,1);
        ll left=max(1LL,fixed_len/2),right=fixed_len,node1=root,node2,x;
        ll tm=root,le=1;
        while(left<right)
        {

            ll mid=(left+right)/2;

            if((ll)len[mid].size()>0)
            {
                query(mid);
                cin>>tm>>le;
            }
            else
            {
                le=fixed_len+1;
            }
            if(le>fixed_len)
            {
                right=mid-1;
            }
            else
            {
                node1=tm;
                left=mid+1;
            }
        }
        ll siz=len[left].size();
        if(siz>0)
        {
            query(left);
            cin>>tm>>le;
            if(le==fixed_len)
            {
                node1=tm;
            }
        }
        dfs(node1,0,-1,0);

        siz=V.size();

        cout<<"? "<<siz;
        for(ll i=0; i<siz; i++)
        {
            cout<<" "<<V[i];
        }
        nl;
        cin>>node2>>x;

        string ss;
        cout<<"! "<<node1<<" "<<node2<<"\n";
        cin>>ss;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}
/*
1
5
2 1
5 2
1 4
4 2
3 5

*/