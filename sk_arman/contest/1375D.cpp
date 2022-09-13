/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) cin>>n
#define sf2(n, m) cin>>n>>m
#define sf3(n, m,k ) cin>>n>>m>>k
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
ll ar[1190];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        memset(ar,0,sizeof(ar));
        vector<ll>V,V2;
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            ar[a]++;
        }
        ll mex;
        for(ll i=0;; i++)
        {
            if(ar[i]==0)
            {
                mex=i;
                break;
            }
        }
        while(mex<n)
        {
            ll tm=V[mex];
            V[mex]=mex;
            V2.PB(mex);
            ar[mex]++;
            ar[tm]--;
            if(ar[tm]==0&&tm<mex)
            {
                mex=tm;
            }
            else
            {
                for(ll i=mex;; i++)
                {
                    if(ar[i]==0)
                    {
                        mex=i;
                        break;
                    }
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(V[i]!=i)
            {
                if(i!=mex)
                {
                    for(ll j=i+1; j<n; j++)
                    {
                        if(V[j]==i)
                        {
                            V2.PB(j);
                            V[j]=mex;
                            ar[mex]++;
                            ar[i]--;
                            if(ar[i]==0)
                            {
                                mex=i;
                                break;
                            }
                            else
                            {
                                for(ll k=mex;; k++)
                                {
                                    if(ar[k]==0)
                                    {
                                        mex=k;
                                        break;
                                    }
                                }
                            }

                        }
                    }
                }
                ar[V[i]]--;
                V2.PB(i);
                V[i]=i;
                ar[i]++;
                for(ll k=i+1;; k++)
                {
                    if(ar[k]==0)
                    {
                        mex=k;
                        break;
                    }
                }
            }
        }
        ll siz=V2.size();
        cout<<siz<<"\n";
        for(ll i=0; i<siz; i++)
        {
            cout<<V2[i]+1<<" ";
        }
        nl;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}