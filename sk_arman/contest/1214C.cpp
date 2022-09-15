
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
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
#define first ff
#define second ss
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
deque<bool>V;

int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n;
        sf(n);
        string s;
        cin>>s;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='(')
            {
                V.PB(0);
            }
            else
            {
                int l=V.size();
                if(l>0)
                {
                    if(V[l-1]==0&&l>0)
                    {
                        V.pop_back();
                    }
                    else
                    V.PB(1);
                }
                else
                    V.PB(1);
            }
        }
        if(V.size()==0)
        {
            printf("Yes\n");
        }
        else if(V.size()==2){
            if(V[0]!=V[1]){
                printf("Yes\n");
            }
            else {
                printf("No\n");
            }
        }
        else printf("No\n");



        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}