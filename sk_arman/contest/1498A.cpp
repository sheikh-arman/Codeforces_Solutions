#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
bool f(ll n){
	ll num=n;
	ll cnt=0;
	while(num){
		cnt+=(num%10);
		num/=10;
	}
	ll gc=__gcd(cnt,n);
	return (gc>1?1:0);
}
int main(){
	//freopen("1input.txt","r",stdin);
	fast;
	ll tcase=1;
	cin>>tcase;
	for(ll test=1;test<=tcase;test++){
		ll n;
		cin>>n;
		for(ll i=n;;i++){
			if(f(i)){
				cout<<i<<"\n";break;
			}

		}
	}
	return 0;
}