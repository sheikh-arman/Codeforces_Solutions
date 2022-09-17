/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */
#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
///policy begin
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        policy_set;
///policy end
//ll big_mod(ll base,ll power,ll Mod){if(power==0){return 1;}else if(power%2==1){ll p1=base%Mod;ll p2=(big_mod(base,power-1,Mod))%Mod;return (p1*p2)%Mod;}else if(power%2==0){ll p1=(big_mod(base,power/2,Mod))%mod;return (p1*p1)%Mod;}}
class PAIR
{
public:
    ll first;
    ll second;
    ll third;
};
vector<ll>V,V2,V3;
int main()
{
     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test4=1; test4<=tcase; test4++)
    {
        ll n;
        string s,pre,sup,mid;
        cin>>s;
        ll siz=s.size();
        ll left=0;
        ll right=siz-1;
        while(left<=right)
        {
            if(s[left]==s[right])
            {
                pre+=s[left];
                sup+=s[right];
                left++;
                right--;
            }
            else
            {
                break;
            }
        }
        ll ase=(ll)pre.size()*2;
        ll baki=siz-ase;
        if(left>right)
        {
            cout<<s<<endl;
            continue;
        }
        else
        {
           // cout<<pre<<" "<<sup<<endl;
            string tm;
            ll cnt=0;
            for(ll i=left; i<=right; i++)
            {
                cnt++;
                tm+=s[i];
                string tests=tm;
                reverse(tests.begin(),tests.end());
                if(tests==tm)
                {
                    if(cnt<=baki)
                    {
                        mid.clear();
                        mid=tm;
                       // cout<<mid<<" test"<<endl;
                    }
                }
            }
            cnt=0;
            ll mid_siz=(ll)mid.size();
            tm.clear();
            for(ll i=right; i>=left; i--)
            {
                cnt++;
                tm+=s[i];
                string tests=tm;
                reverse(tests.begin(),tests.end());
                if(tests==tm)
                {
                    if(cnt<=baki&&cnt>mid_siz)
                    {
                        mid.clear();
                        mid=tm;
                    }
                }
            }
            //cout<<mid<<" t"<<endl;
            string ans;
            if((ll)pre.size()>0){
               ans=pre;
            }
            ans+=mid;
            if((ll)sup.size()>0){
                reverse(sup.begin(),sup.end());
                ans+=sup;
            }
            cout<<ans<<endl;
        }




    }
///*****************************  ALHAMDULILLAH  *****************************/
}