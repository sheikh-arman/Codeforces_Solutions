#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1000000007
#define  MOD2  1928476349
int main(){
	//freopen("1input.txt","r",stdin);
	fast;
	ll tcase=1;
	cin>>tcase;
	for(ll test=1;test<=tcase;test++){
		ll n,ck=0;
		cin>>n;
		ll andd;
		vector<ll>V;
        for(ll i=1;i<=n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            if(ck==0){
                ck=1;
                andd=a;
            }
            else{
                andd=andd&a;
            }
        }
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(V[i]==andd){
                cnt++;
            }
        }
        ll ans=cnt*(cnt-1);
        ans%=MOD1;
        for(ll i=1;i<=n-2;i++){
            ans*=i;
            ans%=MOD1;
        }
        cout<<ans<<"\n";
	}
	return 0;
}