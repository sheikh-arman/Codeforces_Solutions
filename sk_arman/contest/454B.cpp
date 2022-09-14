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
deque<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,ans=0,cnt=0,t=1,a,mi,pos,ck;
    
    while(t--){
        sf(n);cnt=0;ck=0;
        for(int i=0;i<n;i++){
            sf(a);
            v.push_back(a);
        }
         for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ck=1;break;
            }
        }
        if(ck==0){
            printf("0\n");return 0;
        }
        ck=0;
        while(v[n-1]<=v[0]){cnt++;
            v.push_front(v[n-1]);
            v.pop_back();
            if(v[0]<v[n-1]||cnt>n)
                break;
        }
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ck=1;break;
            }
        }
        if(ck==0){
            printf("%d\n",cnt);
        }
        else{
            printf("-1\n");
        }
        v.clear();
    }
///*****************************  ALHAMDULILLAH  *****************************/
}