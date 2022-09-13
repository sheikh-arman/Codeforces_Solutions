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
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    queue<int>q1,q2;
    int n,k1,k2,cnt=0;
    double ans=0;
    sf(n);
    sf(k1);
    fori(k1){
        int a;sf(a);q1.push(a);
    }
    sf(k2);
    fori(k2){
        int a;sf(a);q2.push(a);
    }
    while(!q1.empty()&&!q2.empty()){
        int a,b;
        a=q1.front();
        b=q2.front();
        if(a>b){
            q1.pop();q2.pop();
            q1.push(b);q1.push(a);
        }
        else{
            q1.pop();q2.pop();
            q2.push(a);q2.push(b);
        }
        cnt++;
        if(cnt>1000){
            cout<<-1<<endl;return 0;
        }
    }
    if(q1.empty())
        cout<<cnt<<" "<<2<<endl;
    else
        cout<<cnt<<" "<<1<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}