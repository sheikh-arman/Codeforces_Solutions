/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define PB push_back
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        ll n,e,ans=0,k;
        cin>>n>>k;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        sort(V.begin(),V.end());
        if(k>=n)
        {
            ans=V[n-1];
        }
        else
        {
            if(k>0)
            {
                ans=V[k-1];if(V[k]==V[k-1])ans=-1;
            }
            else
            {
                ans=V[0]-1;
                if(ans==0)ans=-1;
            }

        }
        cout<<ans<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}