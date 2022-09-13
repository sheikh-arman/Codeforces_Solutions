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
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;


int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,m,ans=0,cnt=0,sum=0,ck1=0;
    sf(n);
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        m=s[i]-48;
        if(m==0)
            cnt++;
        sum+=m;
        v2.pb(m);
    }
    for(int j=n-1;j>=0;j--){
        if(v2[j]||ck1){
            v.pb(v2[j]);ck1=1;
        }
    }
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<" ";
//    }
    reverse(v.begin(),v.end());
    if(cnt==n)
    {
        printf("YES\n");return 0;
    }
    n=v.size();
    for(int i=1; i<=sum/2+1; i++)
    {
        int ck=0;
        if(sum%i==0)
        {
            for(int j=0; j<n; j++)
            {
                ck+=v[j];
                if(ck==i){
                    ck=0;ans++;
                    if(j==n-1&&ans>1){
                        printf("YES\n");return 0;
                    }
                }
                else if(ck!=i&&ck>i){
                    ck=0;break;
                }
            }
        }
    }
    printf("NO\n");
///*****************************  ALHAMDULILLAH  *****************************/
}