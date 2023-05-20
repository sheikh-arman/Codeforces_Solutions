/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};
vector<ll> func(vector<ll>V1,vector<ll>V2)
{
    ll n=min(V1.size(),V2.size());
    for(ll i=0; i<n; i++)
    {
        if(V1[i]>V2[i])
        {
            return V1;
        }
        else if(V1[i]<V2[i]){
            return V2;
        }
    }

    return V2;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>V,ans,ans2;
        ll pos;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            if(a==n)pos=i;
            ans.PB(0);
        }
        if(pos==0)
        {
            for(ll i=1; i<n; i++)
            {
                if(V[i]==n-1)
                {
                    pos=i;
                    break;
                }
            }
        }
        for(ll i=pos; i<n; i++)
        {
            ans2.PB(V[i]);
        }
        ll pos2=pos-1,ma=0;
        for(ll i=pos-2; i>=0; i--)
        {
            if(V[0]<V[i])
            {
                pos2=i;
            }
            else
            {
                break;
            }
        }
        for(ll i=pos-1; i>=pos2; i--)
        {
            ans2.PB(V[i]);
        }
        for(ll i=0; i<pos2; i++)
        {
            ans2.PB(V[i]);
        }
        ans=func(ans,ans2);
        ans2.clear();
        if(pos==n-1)
        {
            //ans2.PB(V[pos]);
            pos2=pos;
            for(ll i=pos-1; i>=0; i--)
            {
                if(V[0]<V[i])
                {
                    pos2=i;
                }
                else
                {
                    break;
                }
            }
            for(ll i=pos; i>=pos2; i--)
            {
                ans2.PB(V[i]);
            }
            for(ll i=0; i<pos2; i++)
            {
                ans2.PB(V[i]);
            }
        }
//        for(ll i:ans2)
//        {
//            cout<<i<<" ";
//        }
//        cout<<"\n";
//        cout<<ans.size()<<" "<<ans2.size()<<" x\n";
        if(ans2.size())
        {
            //cout<<" x\b";
            ans=func(ans,ans2);
        }

        ans2.clear();
        for(ll i:ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}