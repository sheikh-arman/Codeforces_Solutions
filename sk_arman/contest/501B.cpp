
/*
    Sk arman Hossain
    University of Barisal

    Problem name :Disjoint set union(dsu)
    Algorithm :Disjoint set union(dsu)
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<int,int>
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
#define NO printf("NO\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
map<string,string>parent;
map<string,string>::iterator it;

int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        map<string ,int>m;
        int n,e,cnt=0;
        sf(n);
        for(int i=0;i<n;i++){
            string s1,s2;
            int a,b;
            cin>>s1>>s2;
            if(m[s2]==0||m.count(s2)==0){
                    if(m[s1]==0||m.count(s1)==0){
                        cnt++;
                    }
                m[s2]=1;
                m[s1]=0;
                if(parent.count(s1)==0){
                    parent[s2]=s1;
                }
                else{
                    parent[s2]=parent[s1];
                    parent[s1]="\0";
                }
            }
        }
        printf("%d\n",cnt);
        for(it=parent.begin();it!=parent.end();it++){
                if(it->second!="\0")
                     cout<<it->second<<" "<<it->first<<endl;

        }
       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}