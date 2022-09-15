
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

int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,ans=INT_MAX,cnt=0;
        sf(n);
        string s,s2,s3,s1;
        cin>>s;
        s1="RBG";
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }
        if(ans>cnt)
        {
            ans=cnt;
            s3=s2;
        }

        s2.clear();
        s1="RGB";
        cnt=0;

        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }
        if(ans>cnt)
        {
            s3=s2;ans=cnt;
        }
        s2.clear();
        s1="BRG";
        cnt=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }

        if(ans>cnt)
        {
            s3=s2;ans=cnt;
        }
        s2.clear();
        s1="BGR";
        cnt=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }
        if(ans>cnt)
        {
            s3=s2;ans=cnt;
        }
        s2.clear();
        s1="GBR";
        cnt=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }
        if(ans>cnt)
        {
            s3=s2;ans=cnt;
        }
        s2.clear();
        s1="GRB";
        cnt=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]!=s1[i%3])
            {
                s2+=s1[i%3];
                cnt++;
            }
            else
                s2+=s[i];
        }
        if(ans>cnt)
        {  s3.clear();
            s3=s2;ans=cnt;
        }
        printf("%d\n",ans);
        cout<<s3<<"\n";
        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}