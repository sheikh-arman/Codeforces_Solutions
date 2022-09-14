/*
    Sk arman Hossain
    University of Barisal

    Problem name : Codeforces 1401D
    Solution : DFS
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {vector<ll>V,V2,V3;
        ll n,a,mi=999999999999999;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a;
            V.PB(a);
            mi=min(mi,a);
        }
        for(ll i=0;i<n;i++){
            if(V[i]%mi==0){
                V2.PB(V[i]);
                V3.PB(i);
            }
        }
        sort(V2.begin(),V2.end());
        ll siz=V2.size();
        for(ll i=0;i<siz;i++){
            V[V3[i]]=V2[i];
        }
        ll ck=1;
        for(ll i=1;i<n;i++){
            if(V[i]<V[i-1]){
                ck=0;break;
            }
        }
        if(ck){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}