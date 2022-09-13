#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll a,b,ans;
        cin>>a>>b;
        string s;
        cin>>s;
        ll one=0,zero=0;
        ll n=s.size();
        ll ck=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                ll op=n-i-1;
                if(s[op]!='?')
                {
                    if(s[n-i-1]=='0')
                    {
                        s[i]='0';
                    }
                    else
                    {
                        s[i]='1';
                    }
                }
            }
        }
        ll quetion=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                quetion++;
            }
            if(s[i]=='0')zero++;
            if(s[i]=='1')one++;
        }
        // cout<<quetion<<" "<<one<<" "<<zero<<" x\n";
        ll baki_zero=a-zero;
        ll baki_one=b-one;
        //cout<<quetion<<" "<<baki_one<<" "<<baki_zero<<" x\n";
        if(baki_one<0||baki_zero<0)
        {
            cout<<"-1\n";
            continue;
        }
        if(baki_one%2!=0&&baki_zero%2!=0)
        {
            cout<<"-1\n";
            continue;
        }
        if((baki_one%2!=0||baki_zero%2!=0)&&quetion%2==0)
        {
            cout<<"-1\n";
            continue;
        }
        if(baki_one%2!=0)
        {
            if(n%2==0)
            {
                cout<<"-1\n";
                continue;
            }
            else
            {
                s[n/2]='1';
                baki_one--;
            }
        }
        if(baki_zero%2!=0)
        {
            if(n%2==0)
            {
                cout<<"-1\n";
                continue;
            }
            else
            {
                s[n/2]='0';
                baki_zero--;
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                if(baki_one>0)
                {
                    baki_one-=2;
                    s[i]='1';
                    ll op=n-i-1;
                    s[op]='1';
                }
                else
                {
                    break;
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                baki_one-=2;
                s[i]='0';
                ll op=n-i-1;
                s[op]='0';
            }
        }
        ll ck2=0;
        for(ll i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                ck2=1;break;
            }
        }
        if(ck2==1){
            cout<<"-1\n";continue;
        }
        cout<<s<<"\n";
    }
    return 0;
}