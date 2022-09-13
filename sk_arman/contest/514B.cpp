
#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    set<double>s;
    set<double>:: iterator it4;
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,t,m,x,y;
    sf(n);
    sff(x,y);
    for(int i=0;i<n;i++){
        int x1,y1;
        sff(x1,y1);
        if(x-x1==0){
            s.insert(1000000);
            continue;
        }
        else if(y-y1==0){
            s.insert(1000003);
            continue;
        }
        double m=(double)(x-x1)/(y-y1);
        s.insert(m);
    }
//    for(it4=s.begin();it4!=s.end();it4++){
//        cout<<*it4<<" ";
//    }
    printf("%d\n",s.size());
///*****************************  ALHAMDULILLAH  *****************************/
}