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
    int n,r,d,t,m,cnt=0,x,y,z,x1,y1,k;
    double ans=0;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='1'&&s[i]!='4'){
            cout<<"NO"<<endl;return 0;
        }
        else{
            if((s[i]=='4'&&i==0)||(s[i]=='4'&&i==1&&s[i-1]!='1')){
                cout<<"NO"<<endl;return 0;
            }
            else if(s[i]=='4'&&s[i-1]=='4'&&s[i-2]!='1'){
                cout<<"NO"<<endl;return 0;
            }
        }
    }
    cout<<"YES"<<endl;return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}