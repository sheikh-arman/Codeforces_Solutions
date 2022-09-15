
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
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        ll sq=sqrt(n);
        ll baki=n-(sq*sq);
        if(baki>0){
            if(baki==sq+1){
                cout<<sq+1<<" "<<sq+1<<"\n";
            }
            else if(baki<=sq){
                cout<<baki<<" "<<sq+1<<"\n";
            }
            else{
                    baki-=(sq+1);
                cout<<sq+1<<" "<<(sq+1)-baki<<"\n";
            }
        }
        else{
            cout<<sq<<" 1\n";
        }
    }
    return 0;
}