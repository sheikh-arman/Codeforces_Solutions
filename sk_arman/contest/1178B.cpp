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
//void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<int> :: iterator it1,it2;

int ar[1000010];
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase;
    ///while(1){
    ll n,ans=0,cnt=0,cnt2=0,sum=0,sum2=0;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='v'){
            cnt2=0;
            cnt++;
        }
        else if(s[i]=='o'){
                if(cnt>1&&cnt2==0){
                v.pb((cnt-1));
                sum+=(cnt-1);
                }
                cnt=0;
            v.pb(0);
            cnt2++;
        }
    }
    if(cnt>1){
        v.pb((cnt-1));sum+=(cnt-1);
    }

    n=v.size();
    for(int i=0;i<n;i++){
           // printf("%d\n",v[i]);
           if(v[i]){
            sum2+=v[i];
           }
        else if(v[i]==0){
            ans+=((sum-sum2)*sum2);
            // printf("%d %d %d\n",sum,sum2,v[i]);
        }

    }
    printf("%lld",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}