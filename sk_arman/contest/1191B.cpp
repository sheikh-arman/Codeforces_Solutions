#include<bits/stdc++.h>
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
#define F first
#define S second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<pair<int ,char > >v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    //sf(tcase);
    while(tcase--)
    {
        ll n,ans,a,ans2,tmp;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        v.pb({s1[0]-'0',s1[1]});
        v.pb({s2[0]-'0',s2[1]});
        v.pb({s3[0]-'0',s3[1]});
        vst(v);
        if(v[0].F==v[1].F&&v[0].F==v[2].F){
            set<char>s;
            s.insert(v[0].S);
            s.insert(v[1].S);
            s.insert(v[2].S);
            int l=s.size();
            printf("%d\n",l-1);return 0;
        }
        else if(v[0].F==v[1].F-1&&v[1].F==v[2].F-1){
            set<char>s;
            s.insert(v[0].S);
            s.insert(v[1].S);
            s.insert(v[2].S);
            int l=s.size();
            printf("%d\n",l-1);return 0;
        }
        set<char>s;
            s.insert(v[0].S);
            s.insert(v[1].S);
            s.insert(v[2].S);
            int l=s.size();
        if(l==3){
            printf("%d\n",l-1);return 0;
        }
        else if(l==2){
            if(v[0].S==v[1].S){
                if(v[0].F==v[1].F){
                    printf("1\n");
                }
                else if(v[1].F-v[0].F<=2){
                    printf("1\n");
                }
                else printf("2\n");
            }
            else if(v[2].S==v[1].S){
                if(v[2].F==v[1].F){
                    printf("1\n");
                }
                else if(v[2].F-v[1].F<=2){
                    printf("1\n");
                }
                else printf("2\n");
            }
            else if(v[0].S==v[2].S){
                if(v[2].F-v[0].F<=2){
                    printf("1\n");
                }
                else printf("2\n");
            }
            return 0;
        }
        else if(l==1){
             set<int>s2;
            s2.insert(v[0].F);
            s2.insert(v[1].F);
            s2.insert(v[2].F);
            int l2=s2.size();
            if(l2==1){
                printf("0\n");
            }
            else if(l2==2){
                printf("1\n");
            }
            else if(v[1].F-v[0].F<=2||v[2].F-v[1].F<=2){
                printf("1\n");
            }
            else printf("2\n");
        }


       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}