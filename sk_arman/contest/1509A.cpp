#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
int main(){
	//freopen("1input.txt","r",stdin);
	fast;
	ll tcase=1;
	cin>>tcase;
	for(ll test=1;test<=tcase;test++){
		ll n;
		vector<ll>even,odd;
		cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a%2==0){
                even.PB(a);
            }
            else{
                odd.PB(a);
            }
        }
        for(ll i:odd){
            cout<<i<<" ";
        }
        for(ll i:even){
            cout<<i<<" ";
        }
        cout<<"\n";
	}
	return 0;
}