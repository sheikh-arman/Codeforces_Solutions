#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
ll mat[110][110];
ll color[110][110];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<pair<pair<ll,ll>,ll>  >srt;
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                ll a;
                cin>>a;
                mat[i][j]=a;
                color[i][j]=0;
                srt.PB({{a,i},j});
            }
        }
        VST(srt);
        for(ll i=0; i<m; i++)
        {
            ll x=srt[i].first.second;
            ll y=srt[i].second;
            ll va=srt[i].first.first;
            ll lagbey=y;
            for(ll j=0; j<m; j++)
            {
                if(color[x][j]==0&&mat[x][j]==va)
                {
                    lagbey=j;
                    break;
                }
            }
            //cout<<srt[i].first.first<<" "<<x<<" "<<y<<" x\n";
            swap(mat[x][i],mat[x][lagbey]);
            color[x][i]=1;
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}