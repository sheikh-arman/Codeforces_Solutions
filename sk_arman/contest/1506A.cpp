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
		ll n,m,x;
		cin>>n>>m>>x;
		if(n==1&&m==1){
			cout<<"1\n";continue;
		}
		ll col=x/n;
		//if(x%n==0)col--;
		ll row=x-(col)*n;
		if(x%n!=0)col++;
		if(row==0)row=n;
		//cout<<row<<" "<<col<<" x\n";
		ll val=((row-1)*m)+col;
		cout<<val<<"\n";
		//cout<<"Case "<<test<<": "<<n<<"\n";
	}
	return 0;
}