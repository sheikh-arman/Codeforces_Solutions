/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,s;
    cin>>n;
    vector<ll>V(n+2);
    V[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>V[i];
        V[i]+=V[i-1];
    }
    if(V[n]%3==0){
        ll ans=0,cnt=0;
        for(ll i=n-1;i>0;i--){

            if(V[i]==V[n]/3){
                    ans+=cnt;
            }
            if(V[i]==(V[n]*2)/3){
                cnt++;
            }
        }
        cout<<ans<<"\n";
    }
    else{
        cout<<"0\n";
    }
    return 0;
 }