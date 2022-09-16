/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : dp
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    for(ll TEST=1; TEST<=tcase; TEST++)
    {

        ll a,b,x,y;
        cin>>x>>y;
        cin>>a>>b;
        ll ans=abs(x-y)*a;
        x=min(x,y);
        ans+=min(x*b,2*x*a);
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
    return 0;
}