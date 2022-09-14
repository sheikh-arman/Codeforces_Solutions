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
ll ar[30];
ll kstring[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        for(ll i=0; i<=26; i++)
        {
            ar[i]=0;
        }
        ll n,k;
        cin>>n>>k;
        for(ll i=0;i<=k+1;i++){
            kstring[i]=0;
        }
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            ar[s[i]-'a']++;
        }
        ll ans=1;
        ll cnt=0,sum=0;
        for(ll i=0;i<=26;i++){
            if(ar[i]%2!=0){
                ar[i]--;
                cnt++;
            }
            sum+=ar[i];
        }
        for(ll i=1;i<=(ll)min(k,cnt);i++){
            kstring[i]++;
        }
        sum/=2;
        ll baki=sum/k;
        for(ll i=k;i>=1;i--){
            kstring[i]+=(baki*2);
        }
        baki=sum%k;
        if(baki>0){
            baki*=2;
            for(ll i=cnt+1;i<=k;i++){
                if(baki>0){
                    baki--;
                    kstring[i]++;
                }
            }
            for(ll i=1;i<=k;i++){
                if(baki>1){
                    kstring[i]+=2;baki-=2;
                }
            }
        }
        ll mi=9999999999999999;
        for(ll i=1;i<=k;i++){
            mi=min(mi,kstring[i]);
        }
        ans=max(ans,mi);
        cout<<ans<<"\n";

    }
    return 0;
}