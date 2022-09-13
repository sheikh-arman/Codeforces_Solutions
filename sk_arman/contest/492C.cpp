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
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
map<ll ,ll>mm;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll n,r,avg,a,b,tg=0,cnt=0,need;
    sffl(n,r);
    sfl(avg);
    fori(n){
       sffl(a,b);tg+=a;
       if(a<r){
            mm[b]+=r-a;v.pb(b);
       }
    }
    vst(v);
    need=(n*avg)-tg;
    //cout<<need<<endl;
    n=v.size();
    if(need<=0){
                cout<<cnt<<endl;return 0;
            }
    for(int i=0;i<n;i++){
        if(need<=0){
                cout<<cnt<<endl;return 0;
            }
        if(mm[v[i]]>=need){
            cnt+=v[i]*need;cout<<cnt<<endl;return 0;
        }
        else{
            cnt+=v[i]*mm[v[i]];need-=mm[v[i]];mm[v[i]]=0;
            //printf("%lld %lld %lld \n",v[i],mm[v[i]],need);
        }
    }

///*****************************  ALHAMDULILLAH  *****************************/
}