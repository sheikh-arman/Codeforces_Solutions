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
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		ll cnt=0,pos=-1;
		for(ll i=0;i<n;i++){
			if(s[i]=='*'){
				s[i]='X';cnt++;pos=i;break;
			}
		}
		for(ll i=n-1;i>=0;i--){
			if(s[i]=='*'){
				cnt++;
				s[i]='X';break;
			}
		}
		if(pos!=-1){
			ll bosaici=pos,last=pos,ses=pos;
			for(ll i=pos+1;i<n;i++){
				if(s[i]=='*'){
					if(i-bosaici>k){
						cnt++;bosaici=last;
					}
					last=i;
				}
				if(s[i]=='X')ses=i;
			}
			if(ses>bosaici&&ses-bosaici>k){
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}