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
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<pair<int,int > >v,v2,v3;
vector<int> :: iterator it1,it2;
int ar[1000010]= {0};
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    while(tcase--)
    {
         ll n,m,a,b,ans=0,ans2=0;
        scanf("%lld",&n);
        n*=2;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            if(!ar[a])
                v.push_back({a,i});
            else
                v2.push_back({a,i});
            ar[a]=1;
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<(n/2)-1;i++){
            if(v[i].second>v2[i].second){
                swap(v[i].second,v2[i].second);
            }
        }
        ans+=abs(1-v[0].second);
        for(int i=0; i<(n/2)-1; i++)
        {
            ans+=abs(v[i].second-v[i+1].second);
        }
        ans+=abs(1-v2[0].second);
        for(int i=0; i<(n/2)-1; i++)
        {
            ans+=abs(v2[i].second-v2[i+1].second);
        }


//        int pos;
//        if(abs(1-v[0].second)>abs(1-v2[0].second))
//        {
//            ans2+=abs(1-v2[0].second);
//            pos=v2[0].second;
//            v2[0].second=INT_MAX;
//        }
//        else
//        {
//            ans2+=abs(1-v[0].second);
//            pos=v[0].second;
//            v[0].second=INT_MAX;
//        }
//        for(int i=0; i<(n/2)-1; i++)
//        {
//            if(abs(pos-v[i+1].second)>abs(pos-v2[i+1].second))
//            {
//                ans2+=abs(pos-v2[i+1].second);
//                pos=v2[i+1].second;
//                v2[i+1].second=INT_MAX;
//
//            }
//            else
//            {
//                ans2+=abs(pos-v[i+1].second);
//                pos=v[i+1].second;
//                v[i+1].second=INT_MAX;
//            }
//           // ans+=abs(v[i].second-v[i+1].second);
//        }
//
//        if(abs(1-v[0].second)>abs(1-v2[0].second))
//        {
//            ans2+=abs(1-v2[0].second);
//            pos=v2[0].second;
//            v2[0].second=INT_MAX;
//        }
//        else
//        {
//            ans2+=abs(1-v[0].second);
//            pos=v[0].second;
//            v[0].second=INT_MAX;
//        }
//        for(int i=0; i<(n/2)-1; i++)
//        {
//            if(abs(pos-v[i+1].second)>abs(pos-v2[i+1].second))
//            {
//                ans2+=abs(pos-v2[i+1].second);
//                pos=v2[i+1].second;
//                v2[i+1].second=INT_MAX;
//
//            }
//            else
//            {
//                ans2+=abs(pos-v[i+1].second);
//                pos=v[i+1].second;

       // int res=min(ans,ans2);
        //printf("%d %d \n",ans,ans2);
        printf("%lld\n",ans);


    }
///*****************************  ALHAMDULILLAH  *****************************/
}