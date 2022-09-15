#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        string s1,s2;
        cin>>s1>>s2;
        ll cnt_type1=0;
        ll cnt_type2=0;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]=='0'&&s2[i]=='1')
            {
                cnt_type1++;
            }
            if(s1[i]=='1'&&s2[i]=='0')
            {
                cnt_type2++;
            }
        }
        ll ans=9999999999;
        if(cnt_type1==cnt_type2)
        {
            ans=cnt_type1*2;
        }
        for(ll i=0; i<n; i++)
        {
            if(s1[i]=='1'&&s2[i]=='1')
            {
                ll x=i-1;
                while(x>=0)
                {
                    if(s1[x]=='0')s1[x]='1';
                    else
                    {
                        s1[x]='0';
                    }
                    x--;
                }
                x=i+1;
                while(x<n)
                {
                    if(s1[x]=='0')s1[x]='1';
                    else
                    {
                        s1[x]='0';
                    }
                    x++;
                }
                break;
            }
        }
        cnt_type1=0;
        cnt_type2=0;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]=='0'&&s2[i]=='1')
            {
                cnt_type1++;
            }
            if(s1[i]=='1'&&s2[i]=='0')
            {
                cnt_type2++;
            }
        }
         if(cnt_type1==cnt_type2)
        {
            ans=min(ans,(cnt_type1*2)+1);
        }
        if(ans==9999999999){
            cout<<"-1\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }
    return 0;
}