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
ll ar1[200010];
ll ar_rev[200010];
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
        for(ll i=0; i<=n; i++)
        {
            ar1[i]=ar_rev[i]=0;
        }
        string s,s2;
        cin>>s>>s2;
        if(n==1){
            cout<<"YES\n";
            if(s[0]==s2[0]){
                cout<<"2\n1 1\n1 1\n";
            }
            else{
                cout<<"1\n1 1\n";
            }
            continue;
        }
        vector< pair<ll,ll> >V;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0')continue;
            ll j=i+1;
            while(j<n)
            {
                if(s[j]=='1')j++;
                else break;
            }
            V.PB({i+1,j});
            if(i-1>=0)ar1[i-1]++;
            if(j<n)ar_rev[j]++;
            i=j-1;
        }
        for(ll i=1; i<n; i++)
        {
            ar_rev[i]+=ar_rev[i-1];
        }
        for(ll i=n-2; i>=0; i--)
        {
            ar1[i]+=ar1[i+1];
        }
//        for(ll i=0;i<n;i++){
//            cout<<ar1[i]<<" ";
//        }
//        cout<<" x\n";
//        for(ll i=0;i<n;i++){
//            cout<<ar_rev[i]<<" ";
//        }
//        cout<<" x\n";
        for(ll i=0; i<n; i++)
        {
            ll val=ar1[i]+ar_rev[i];
            if(val%2)
            {
                if(s2[i]=='0')s2[i]='1';
                else s2[i]='0';
            }
        }
        //  cout<<s2<<" x\n";
//        for(ll i=n-1;i>=0;i--){
//            if(ar_rev[i]%2){
//                if(s2[i]=='0')s2[i]='1';
//                else s2[i]='0';
//            }
//        }
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(s2[i]=='1')cnt++;
        }
        // cout<<cnt<<" x\n";
        if(cnt==0||cnt==n)
        {
            if(cnt==n)
            {
                V.PB({n,n});
                V.PB({1,n-1});
                V.PB({1,n});
            }

            cout<<"YES\n";
            ll siz=V.size();
            cout<<siz<<"\n";
            for(ll i=0; i<siz; i++)
            {
                cout<<V[i].first<<" "<<V[i].second<<"\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }




    }
    return 0;
}