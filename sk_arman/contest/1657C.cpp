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
        ll n,sum=0;
        cin>>n;
        string s;
        cin>>s;
        stack<char>stk;
        ll ans=0,pos=-1,start=0;
        for(ll i=0;i<n;i++){
            if(i-start>0){
                if(s[i]==s[start]){
                    ans++;pos=i;start=i+1;
                    while(!stk.empty())stk.pop();
                }
                else {
                    if(!stk.empty()){
                        if(s[i]==')'){
                            stk.pop();
                        }
                        else{
                            stk.push(s[i]);
                        }
                        if(stk.empty()){
                        ans++;
                        start=i+1;pos=i;
                    }
                    }

                }
            }
            else{
                if(s[i]=='(')
                 stk.push(s[i]);
            }
        }
        pos++;
        cout<<ans<<" "<<n-pos<<"\n";

    }
    return 0;
}