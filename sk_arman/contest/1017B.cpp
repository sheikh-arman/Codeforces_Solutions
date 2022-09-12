#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    long long int n,a,b,c,d,sum=0,s10=0,s20=0,s11=0,s21=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]=='0')
            s10++;
        else
            s11++;
    }
    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s2[i]=='0')
        {
            if(s1[i]=='0'&&s11>0)
            {
                sum+=s11;
                if(s10)s10--;
            }
            if(s1[i]=='1'&&s10>0)
            {
                sum+=s10;
                if(s11)s11--;
            }
        }
    }
    cout<<sum<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}