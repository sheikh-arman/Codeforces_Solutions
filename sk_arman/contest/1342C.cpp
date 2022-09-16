/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : dp
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 50010
ll ar[N+10];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    for(ll TEST=1; TEST<=tcase; TEST++)
    {
        ll q,a,b;
        cin>>a>>b>>q;
        ll cnt=0;
        ll lcm=(a/__gcd(a,b))*b;
        for(ll i=1;i<=lcm;i++){
            ar[i]=(((i%a)%b)!=((i%b)%a));
            if(ar[i]==1)cnt++;
        }
        for(ll i=1;i<=lcm;i++){
            ar[i]+=ar[i-1];
            //cout<<ar[i]<<"\n";
        }
        //cout<<cnt<<" t\n";
        for(ll i=0;i<q;i++){
            ll l,r,ans=0;
            cin>>l>>r;
            if(a==b){
                cout<<"0 ";continue;
            }
            ll tm=0;
            if(l>lcm){
                tm=l/lcm;
                tm=(tm*lcm);
            }
            l-=tm;
            r-=tm;
            //cout<<l<<" t "<<r<<"\n";
            tm=r/lcm;
            ans=cnt*tm;
            r-=(tm*lcm);
            ans+=ar[r];
            ans-=ar[l-1];
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
    return 0;
}