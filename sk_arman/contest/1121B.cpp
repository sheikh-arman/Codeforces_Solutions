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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2[1000],v3;
int ar[10000000];;
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    //scanf("%d",&tcase);
    while(tcase--){
          int  n,m,k,a,cnt=0,mx=0,ma=0,num;
           scanf("%d",&n);
           for(int i=0;i<n;i++){
              scanf("%d",&a);
              v.push_back(a);
           }
           for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                ar[v[i]+v[j]]++;
                ma=max(ma,v[i]+v[j]);
            }
           }
           for(int i=0;i<=ma;i++){
             if(ar[i]>mx){
                mx=ar[i];
                num=i;
             }
           }
           cout<<mx<<endl;

    }
///*****************************  ALHAMDULILLAH  *****************************/
}