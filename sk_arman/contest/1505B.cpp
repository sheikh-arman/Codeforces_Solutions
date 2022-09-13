#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	//freopen("1input.txt","r",stdin);
	fast;
	ll tcase=1;
	//cin>>tcase;
	for(ll test=1;test<=tcase;test++){
		ll n;
		cin>>n;
		while(n>9){
			ll tm=n,sum=0;
			while(tm){
				sum+=tm%10;
				tm/=10;
			}
			n=sum;
		}
		cout<<n<<"\n";
	}
	return 0;
}