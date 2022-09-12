#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define MP pair<ll,ll>
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
#define YES printf("YES\n")
#define YES printf("NO\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    //sf(tcase);
    while(tcase--)
    {
        int left=0,right=0,cnt=0;
        string s;
        cin>>s;
        int len=s.size();
        while(1){
            if(s[left]==s[right]){
                    if(right<len-1)
                        right++;
                else{
                    cnt+=((right-left-1)%2==0);left=right;
                }
            }
            else{
                cnt+=((right-left)%2==0);left=right;
            }
            if(left==len-1){
                break;
            }
        }


        printf("%d\n",cnt);
    }
    ///two pointers
///*****************************  ALHAMDULILLAH  *****************************/
}