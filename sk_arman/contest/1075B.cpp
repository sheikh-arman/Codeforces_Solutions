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
vector<int>v,v3;
vector<pair<int,int> >v2;
//vector<pair<int,int> > :: iterator it1,it2;
vector<int> :: iterator it1,it2;
map<int,int>ck;
int ans[2000000];
int main()
{
    ///freopen("input.txt","r",stdin);
    int t=1;
    while(t--)
    {
        int n,cnt=0,a,m;
        sff(n,m);

        for(int i=0; i<n+m; i++)
        {
            sf(a);v.pb(a);
        }
        for(int i=0; i<n+m; i++)
        {
            sf(a);ck[v[i]]=a;
            if(a==1){
                v2.pb({v[i],cnt++});v3.pb(v[i]);
            }
        }

        if(m==1){
            printf("%d\n",n);return 0;
        }
        vst(v2);
        vst(v3);
//        for(int i=0;i<m;i++)
//            cout<<v3[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<m;i++)
//            cout<<v3[i]<<" ";
//        cout<<endl;
        for(int i=0;i<m+n;i++){
            if(ck[v[i]]==0){
                int l,u,lc,uc,ckk1=1;
                it1=lower_bound(v3.begin(),v3.end(),v[i]);
                it2=upper_bound(v3.begin(),v3.end(),v[i]);
                l=it1-v3.begin()-1;
                u=it2-v3.begin(); //printf("%d %d %d\n",v[i],l,u);
                if(u>=m){
                    ans[v2[l].second]++;continue;
                }
                if(i<0){
                    ans[v2[0].second]++;continue;
                }
                lc=abs(v2[l].first-v[i]);
                uc=abs(v2[u].first-v[i]);

                if(lc<=uc){
                        ans[v2[l].second]++;
                }
                else{
                    ans[v2[u].second]++;
                }
            }
        }

        for(int i=0;i<m;i++){
            printf("%d ",ans[i]);
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}