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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
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
        string s;
        cin>>s;
        n=s.size();
        ll pos=-1;
        for(ll i=1; i<n-1; i++)
        {
            if(s[i]>s[0]&&s[i]>s[i+1])
            {
                pos=i;
                break;
            }
            if(s[i]<s[0]&&s[i]<s[i+1])
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1)
        {

            string s2;
            for(ll i=0; i<pos; i++)
            {
                s2+=s[i];
            }
            cout<<s2<<" ";
            cout<<s[pos]<<" ";
            s2.clear();
            for(ll i=pos+1; i<n; i++)
            {
                s2+=s[i];
            }
            cout<<s2<<"\n";
        }
        else
        {
            //cout<<"ck\n";
            //cout<<s<<"\n";
            //cout<<pos<<" x\n";
            string s1,s2,s3;
            s1+=s[0];
            s2+=s[1];
            for(ll i=2; i<n; i++)
            {
                s3+=s[i];
            }
            if((s2>=s1&&s2>=s3)||(s2<=s1&&s2<=s3))
            {
                cout<<s1<<" "<<s2<<" "<<s3<<"\n";
            }
            else
            {
                s1.clear();
                s2.clear();
                s3.clear();
                s1+=s[0];
                for(ll i=1; i<n-1; i++)
                {
                    s2+=s[i];
                }
                s3+=s[n-1];
                //cout<<s<<"\n";
                //cout<<s1<<" "<<s2<<" "<<s3<<"\n";
                if((s2>=s1&&s2>=s3)||(s2<=s1&&s2<=s3))
                {
                    cout<<s1<<" "<<s2<<" "<<s3<<"\n";
                }
                else
                {
                    s1.clear();
                    s2.clear();
                    s3.clear();
                    for(ll i=0; i<n-2; i++)
                    {
                        s1+=s[i];
                    }
                    s2+=s[n-2];
                    s3+=s[n-1];
                    if((s2>=s1&&s2>=s3)||(s2<=s1&&s2<=s3))
                    {
                        cout<<s1<<" "<<s2<<" "<<s3<<"\n";
                    }
                    else
                    {
                        cout<<":(\n";
                    }
                }

            }
        }
    }
    return 0;
}