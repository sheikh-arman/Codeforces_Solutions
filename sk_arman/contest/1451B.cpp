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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
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
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=100;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        vector<ll>V;
        string s;
        cin>>n>>m;
        cin>>s;
        for(ll i=0;i<m;i++){
            ll a,b,ck=0,pos=0,last=0;
            cin>>a>>b;
            for(ll j=a-1;j<b;j++){
                pos=last;
                while(pos<n){
                    if(s[pos]==s[j]){
                        V.PB(pos);
                        last=pos+1;
                        break;
                    }
                    pos++;
                }
            }
            last=n-1;
            ll j=b-1,cc=0;
            for(;j>=a-1;j--){
                pos=last;
                while(pos>=0){
                    if(s[pos]==s[j]){
                        pos--;
                        last=pos;cc=1;
                        break;
                    }
                    pos--;
                }
                if(cc){
                    j--;break;
                }
            }
            //for(ll x=0;x<b-a+1;x++){
                //cout<<V[x]<<" tt\n";
           // }
            V.pop_back();
            //for(ll x=0;x<V.size();x++){
                //cout<<V[x]<<" tt2\n";
            //}
            //cout<<j<<" jj\n";
            for(;j>=a-1;j--){
                pos=last;
                while(pos>=0){
                    if(s[pos]==s[j]){
                            //cout<<pos<<" "<<V[V.size()-1]<<" cxc\n";
                        if(pos>V[V.size()-1]){//cout<<"xxx\n";
                            ck=1;break;
                        }
                        pos--;
                        last=pos;
                        V.pop_back();
                        break;
                    }
                    else{
                        ck=1;break;
                    }
                    pos--;
                }
                if(ck)break;
            }
            if(ck){
                YES;
            }
            else{
                NO;
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}