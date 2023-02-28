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
ll ar[30];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        string s,ans;
        cin>>s;
        ans=s;
        //cout<<ans<<" x\n";
        ll n=s.size();
        for(ll i=0;i<26;i++){
            ar[i]=0;
        }
        for(ll i=0;i<n;i++){
            ar[s[i]-'a']++;
        }
        string tm;
        ll bosaici=0;
        for(ll i=0;i<26;i++){
            while(ar[i]>=2){
               ans[bosaici]=(char)(i+'a'); 
               ans[(n-bosaici)-1]=(char)(i+'a');
               ar[i]-=2;
               bosaici++;
               //cout<<"tut \n";
            }
            if(ar[i]){
                for(ll j=i;j<26;j++){
                    while(ar[j]--){
                        //cout<<"ti\n";
                        tm+=(char)(j+'a');
                    }
                }
                break;
            }
        }
        //cout<<ans<<" f\n";
        set<char>st;
        ll siz=tm.size();
        for(ll i=1;i<siz;i++){
            st.insert(tm[i]);
            //cout<<"t";
        }
        if((ll)st.size()==1){
           // cout<<"x\n";
            ll x=n-(bosaici*2);
            x/=2;
            ll pos=bosaici+x,j=1;
            for(ll i=bosaici;i<n-bosaici;i++){
                if(i==pos){
                    ans[i]=tm[0];
                }
                else{
                    ans[i]=tm[j];
                    j++;
                }
            }
        }
        else if(siz>0){
            //cout<<tm<<" "<<" x\n";
            ll j=1;
            for(ll i=bosaici;i<(n-bosaici)-1;i++){
                ans[i]=tm[j];
                j++;
            }
            
            ans[(n-bosaici)-1]=tm[0];
        }
        cout<<ans<<"\n";
    }
    return 0;
}