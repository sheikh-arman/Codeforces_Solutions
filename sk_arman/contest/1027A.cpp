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
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,t,m;
    sf(t);
    for(int i=0;i<t;i++){
        sf(n);int ck=1;
        string s;
        cin>>s;
        int l=s.size();
        for(int j=0;j<l/2&&ck;j++){
                //cout<<s[j]-'a'-1<<endl;
            if(s[j]-'a'==s[l-j-1]-'a'||s[j]-'a'-1==s[l-j-1]-'a'+1||s[j]-'a'+1==s[l-j-1]-'a'-1)
            {
                //cout<<s[j]<<" "<<s[l-j-1]<<" "<<(char)(s[j]-'a'-1)<<" "<<(char)(s[l-j-1]-'a'-1)<<endl;
            }
            else
                ck=0;

        }
        cout<<(ck?"YES":"NO")<<endl;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}