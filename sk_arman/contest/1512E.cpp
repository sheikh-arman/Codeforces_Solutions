#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll ar[510];
ll ck_ar[510];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0,l,r,val;
        cin>>n>>l>>r>>val;
        for(ll i=0;i<=n;i++){
            ar[i]=ck_ar[i]=0;
        }
        ll slot=r-l+1;
        for(ll i=1;i<=slot;i++){
            ar[i]=i;
            sum+=i;
        }
        if(sum>val){
            cout<<"-1\n";continue;
        }
        val-=sum;
        ll mx=n;
        for(ll i=slot;i>=1;i--){
            if(val>0){
                ll dif=mx-ar[i];
                ll mi=min(dif,val);
                ar[i]+=mi;
                val-=mi;
                mx=ar[i]-1;
            }
            else{
                break;
            }
        }
        if(val!=0){
            cout<<"-1\n";continue;
        }
        for(ll i=1;i<=slot;i++){
            ck_ar[ar[i]]=1;
        }
        vector<ll>V;
        for(ll i=1;i<=n;i++){
            if(ck_ar[i]==0){
                V.PB(i);
            }
        }
        ll lagbe=l-1;
        for(ll i=0;i<lagbe;i++){
            cout<<V[i]<<" ";
        }
        for(ll i=1;i<=slot;i++){
            cout<<ar[i]<<" ";
        }
        ll siz=V.size();
        for(ll i=lagbe;i<siz;i++){
            cout<<V[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}