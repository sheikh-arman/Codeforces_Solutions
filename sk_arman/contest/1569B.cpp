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
ll ar[60][60];
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
            for(ll j=0; j<=n; j++)
            {
                ar[i][j]=0;
            }
        }
        string s;
        cin>>s;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                for(ll j=0; j<n; j++)
                {
                    ar[i][j]=1;
                    ar[j][i]=1;
                }
            }
            else
            {
                V.PB(i);
            }
        }
        ll num=n;
        if((ll)V.size()>2||(ll)V.size()==0){
            cout<<"YES\n";
            n=V.size();
            for(ll i=0;i<n-1;i++){
                ar[V[i]][V[i+1]]=2;
                ar[V[i+1]][V[i]]=-1;
                for(ll j=i+2;j<n;j++){
                    ar[V[i]][V[j]]=-1;
                    ar[V[j]][V[i]]=2;
                }
            }
            for(ll i=0;i<num;i++){
                for(ll j=0;j<num;j++){
                    if(i==j){
                        cout<<"X";
                    }
                    else{
                        if(ar[i][j]==1){
                            cout<<"=";
                        }
                        else if(ar[i][j]==2){
                            cout<<"+";
                        }
                        else{
                            cout<<"-";
                        }
                    }
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}