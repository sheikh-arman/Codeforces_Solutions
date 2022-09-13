/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
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
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
//ll big_mod(ll base,ll power,ll Mod){if(power==0){return 1;}else if(power%2==1){ll p1=base%Mod;ll p2=(big_mod(base,power-1,Mod))%Mod;return (p1*p2)%Mod;}else if(power%2==0){ll p1=(big_mod(base,power/2,Mod))%mod;return (p1*p1)%Mod;}}



ll ck=0;
ll rep[1000100];
void initial(ll n)
{
    for(ll i=1; i<=n; i++)
    {
        rep[i]=i;
    }
}
int find_representative(ll node)
{
    if(rep[node]==node)
    {
        return node;
    }
    else
    {
        rep[node]=find_representative(rep[node]);
        return rep[node];
    }
}
void joint_node(ll nodex,ll nodey)
{
    ll u=find_representative(nodex);
    ll v=find_representative(nodey);
    if(u!=v)
    {
        rep[u]=v;
    }
    else
    {
       // printf("test %lld %lld\n",u,v);
        ck=1;
    }
}
bool cmp(pair<PR,ll>a,pair<PR,ll>b)
{
    if(a.ff.ff!=b.ff.ff)
        return a.ff.ff<b.ff.ff;
    if(a.ff.ss!=b.ff.ss)
        return a.ff.ss<b.ff.ss;
}

vector<pair<PR,ll> >V;
deque<ll>V2,V3;
//emplace_back()
int main()
{
    //freopen("1input.txt","r",stdin);
    ///freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        sf1(n);
        initial(n);
        for(ll i=0; i<n; i++)
        {
            ll a,b;
            sf2(a,b);
            V.PB({{a,b},i+1});
        }
        sort(V.begin(),V.end(),cmp);
        //nl;
//        for(ll i=0;i<n;i++){
//            cout<<V[i].ff.ff<<" "<<V[i].ff.ss<<" "<<V[i].ss<<endl;
//        }
        for(ll i=0; i<n; i++)
        {
            if(V2.size()==0)
            {
                if(i<n-1)
                {
                    if(V[i+1].ff.ff<=V[i].ff.ss)
                    {
                        V2.PB(V[i].ff.ss);
                        V3.PB(V[i].ss);
                    }
                }
            }
            else
            {
                while(V2.size())
                {
                    if(V2[0]<V[i].ff.ff)
                    {
                        V2.pop_front();
                        V3.pop_front();
                    }
                    else
                    {
                        break;
                    }
                }
                //


                //
                ll pos=lower_bound(V2.begin(),V2.end(),V[i].ff.ff)-V2.begin();
                ll pos2=lower_bound(V2.begin(),V2.end(),V[i].ff.ss)-V2.begin();
                ll siz=V2.size();
                for(ll j=pos; j<siz; j++)
                {
                    if(V2[j]<V[i].ff.ss)
                    {
                        //printf("%lld %lld join\n",V3[j],V[i].ss);
                        joint_node(V3[j],V[i].ss);
                        if(ck==1)
                        {
                            printf("NO\n");
                            return 0;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                V2.insert(V2.begin()+pos2, V[i].ff.ss);
                V3.insert(V3.begin()+pos2, V[i].ss);

               // printf("%lld %lld test\n",pos2,V[i].ff.ss);
//                for(ll k=0;k<V2.size();k++){
//                    printf("%lld ",V2[k]);
//                }
//                nl;

            }
        }
        set<ll>s;
        for(ll i=1;i<=n;i++){
            ll pa=find_representative(i);
            s.insert(pa);
            //printf("%lld pa\n",pa);
            if(s.size()>1){
                printf("NO\n");return 0;
            }
        }

        printf("YES\n");return 0;
        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}