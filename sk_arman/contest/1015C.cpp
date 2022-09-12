#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define pp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v;
int main()
{
    int n,m,cnt=0;
    long long sum=0;
    sff(n,m);
    for(int i=0;i<n;i++){
        int a,b;
        sff(a,b);sum+=a;
        v.pb(a-b);
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        if(sum>m){
            cnt++;sum-=v[i];
        }
    }
    cout<<(m>=sum?cnt:-1)<<endl;
}



///*****************************  ALHAMDULILLAH  *****************************/