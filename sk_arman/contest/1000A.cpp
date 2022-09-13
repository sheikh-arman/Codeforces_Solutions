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
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
priority_queue<string>q1,q2,q3,q4,a1,a2,a3,a4;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,m,ans=0,cnt=0;
    int ar[10]= {0};
    sf(n);
    fori(n)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            if(s[0]=='L')ar[0]++;
            else if(s[0]=='M')ar[1]++;
            else if(s[0]=='S')ar[2]++;
        }
        else if(s.size()==2)
        {
            if(s[1]=='L')ar[3]++;
            else if(s[1]=='S')ar[4]++;
        }
        else if(s.size()==3)
        {
            if(s[2]=='L')ar[5]++;
            else if(s[2]=='S')ar[6]++;
        }
        else if(s.size()==4)
        {
            if(s[3]=='L')ar[7]++;
            else if(s[3]=='S')ar[8]++;
        }
    }
    fori(n)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            if(s[0]=='L')
            {
                if(ar[0]>0)
                    ar[0]--;
                else cnt++;
            }
            else if(s[0]=='M')
            {
                if(ar[1]>0)
                    ar[1]--;
                else cnt++;
            }
            else if(s[0]=='S')
            {
                if(ar[2]>0)
                    ar[2]--;
                else cnt++;
            }
        }
        else if(s.size()==2)
        {
            if(s[1]=='L')
            {
                if(ar[3]>0)
                    ar[3]--;
                else cnt++;
            }
            else if(s[1]=='S')
            {
                if(ar[4]>0)
                    ar[4]--;
                else cnt++;
            }
        }
        else if(s.size()==3)
        {
            if(s[2]=='L')
            {
                if(ar[5]>0)
                    ar[5]--;
                else cnt++;
            }
            else if(s[2]=='S')
            {
                if(ar[6]>0)
                    ar[6]--;
                else cnt++;
            }
        }
        else if(s.size()==4)
        {
            if(s[3]=='L')
            {
                if(ar[7]>0)
                    ar[7]--;
                else cnt++;
            }
            else if(s[3]=='S')
            {
                if(ar[8]>0)
                    ar[8]--;
                else cnt++;
            }
        }
    }
    pf(cnt);
///*****************************  ALHAMDULILLAH  *****************************/
}
/*
special test case 7
L L
L M
M M
M S
S S
S S
S S
result:1
*/