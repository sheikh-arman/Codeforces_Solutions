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
#define PB push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define T(n) printf("test %d\n",n)

typedef long long int ll;

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0,sum2,sum3;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a>0){
                sum+=a;
            }
            else{
                sum-=min(sum,abs(a));
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}