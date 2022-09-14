#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll ar[200010][22];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    for(ll i=1;i<=200000;i++){
        ll x=i,cnt=0;
        while(x){
            if(x%2==0){
                ar[i][cnt]=0;
            }
            else{
                ar[i][cnt]=1;
            }
            x/=2;
            ar[i][cnt]+=ar[i-1][cnt];
            cnt++;
        }

    }
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=0;
        for(ll i=0;i<20;i++){
            ans=max(ans,ar[r][i]-ar[l-1][i]);
        }

        cout<<(r-l+1)-ans<<"\n";
    }
    return 0;
}