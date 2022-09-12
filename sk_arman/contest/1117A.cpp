#include<bits/stdc++.h>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
int main()
{
    ///freopen("input.txt","r",stdin);
        ll n,ans=0,a,b=-1,cnt=0,res=-1;
        sfl(n);
        for(int i=0;i<n;i++){
            sfl(a);
            if(a>b)
                b=a;

            v.pb(a);
        }
        for(int i=0;i<n;i++){
            if(v[i]==b){
                cnt++;
                if(cnt>res)
                    res=cnt;
            }
            else cnt=0;
        }
        printf("%lld\n",res);
///*****************************  ALHAMDULILLAH  *****************************/
}