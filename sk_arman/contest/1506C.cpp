#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	//freopen("1input.txt","r",stdin);
	fast;
	ll tcase=1;
	cin>>tcase;
	for(ll test=1;test<=tcase;test++){

		string a,b;
		cin>>a>>b;
		ll n=a.size();
		ll m=b.size();
		ll ma=0;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				ll cnt=0;
				for(ll k=j;k<m;k++){
					if(a[i+cnt]!=b[k]){
						break;
					}
					cnt++;
					ma=max(ma,cnt);
				}
			}
		}
		//cout<<ma<<" x\n";
		ll ans=(n+m)-(2*ma);
		cout<<ans<<"\n";
	}
	return 0;
}