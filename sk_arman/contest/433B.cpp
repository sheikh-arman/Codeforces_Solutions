#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PB push_back
ll ar1[100010],ar2[100010];
int main (){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<ll>V,V2;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        V.PB(a);
        V2.PB(a);
    }
    sort(V2.begin(),V2.end());
    ll ans1=0,ans2=0;
    for(ll i=0;i<=n;i++){
        ans1+=V[i];
        ans2+=V2[i];
        ar1[i+1]=ans1;
        ar2[i+1]=ans2;
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll st,a,b;
        cin>>st>>a>>b;
        if(st==1){
            cout<<ar1[b]-ar1[a-1]<<"\n";
        }
        else{
            cout<<ar2[b]-ar2[a-1]<<"\n";
        }

    }


}