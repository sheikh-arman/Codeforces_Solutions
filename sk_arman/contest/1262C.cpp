

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
#define pfn(n) printf("%d\n",n)
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
vector<PR>V,V2,V3;
//emplace_back()
int main()
{
    //freopen("1input.txt","r",stdin);
    ///freopen("1output.txt","w",stdout);
    ll tcase=1;
    //string s2="abcd";
    //reverse(s2.begin()+1,s2.begin()+4);
    //cout<<s2<<endl;
    sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        ll n,k;
        sf2(n,k);
        string s;
        cin>>s;
       // cout<<s<<endl;
        //reverse(s.begin()+0,s.begin()+2);
//        cout<<s<<endl;
//        reverse(s.begin(),s.begin()+3);
       // cout<<s<<endl;
        ll pos=0;
        while(k>1)
        {
            k--;
            if(s[pos]!='(')
            {
                ll en;
                for(ll i=pos; i<n; i++)
                {
                    if(s[i]=='(')
                    {
                        en=i;
                        break;
                    }
                }
                reverse(s.begin()+pos,s.begin()+en+1);
                V.PB({pos,en});
                for(ll i=pos+1; i<n; i++)
                {
                    if(s[i]==')')
                    {
                        en=i;
                        break;
                    }
                }
                reverse(s.begin()+pos+1,s.begin()+en+1);
                V.PB({pos+1,en});
                pos+=2;

            }
            else
            {
                ll en;
                for(ll i=pos+1; i<n; i++)
                {
                    if(s[i]==')')
                    {
                        en=i;
                        break;
                    }
                }
                reverse(s.begin()+pos+1,s.begin()+en+1);
                V.PB({pos+1,en});
                pos+=2;
               // T(1);
                //cout<<s<<endl;

            }
        }
        ll cnt=(n-pos)/2;
        for(ll i=0; i<cnt; i++)
        {
            ll en;
            if(s[pos+i]!='(')
            {
                for(ll j=i+pos; j<n; j++)
                {
                    if(s[j]=='(')
                    {
                        en=j;
                        break;
                    }
                }
                reverse(s.begin()+pos+i,s.begin()+en+1);
                V.PB({pos+i,en});
               // T((int)(pos+i));
                //cout<<s<<endl;
                // printf("%lld %lld t\n",pos+i,en);
                //cout<<s<<endl;
            }
        }
        ll ans=V.size();
        printf("%lld\n",ans);
        //  cout<<s<<endl;
        //  reverse(s.begin()+2,s.begin()+2+2);
        // cout<<s<<endl;
        for(ll i=0; i<ans; i++)
        {
            printf("%lld %lld\n",(ll)(V[i].first+1),(ll)(V[i].second+1));
        }
        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}