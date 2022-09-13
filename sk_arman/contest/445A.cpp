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
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,m;
    vector<char>v[110];
    sff(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char a;cin>>a;v[i].pb(a);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i&1){
                if(v[i][j]=='.'&&j%2==0){
                    v[i][j]='W';
                }
                else if(v[i][j]=='.'&&j&1){
                    v[i][j]='B';
                }
            }
            else{
                if(v[i][j]=='.'&&j%2==0){
                    v[i][j]='B';
                }
                else if(v[i][j]=='.'&&j&1){
                    v[i][j]='W';
                }
            }
        }
    }
 for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",v[i][j]);
        }
        printf("\n");
    }
///*****************************  ALHAMDULILLAH  *****************************/
}