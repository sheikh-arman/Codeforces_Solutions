#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll fir[2000010];
ll sec[2000010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt0=0,chk=1;
        for(ll i=0; i<n; i++)
        {
            fir[i]=sec[i]=-1;
            if(s[i]=='0')
            cnt0++;
        }
        if(cnt0%2!=0||n%2!=0||s[0]=='0'||s[n-1]=='0')
        {
            cout<<"NO\n";
            continue;
        }
        ll tg=0;
        ll ar_fir[3];
        ll ar_sec[3];
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                fir[i]=tg;
                tg=1-tg;
                sec[i]=tg;
            }
        }
        ll baki=n-cnt0;
        baki/=2;
        for(ll i=0; i<n; i++)
        {
            if(baki>0&&fir[i]==-1)
            {
                fir[i]=0;
                sec[i]=0;
                baki--;
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(fir[i]==-1)
            {
                fir[i]=1;
                sec[i]=1;
            }
        }
        stack<ll>stk_fir,stk_sec;
        for(ll i=0; i<n; i++)
        {
            if(stk_fir.empty())
            {
                stk_fir.push(fir[i]);
            }
            else
            {
                ll tp=stk_fir.top();
                if(fir[i]==0)
                {
                    stk_fir.push(0);
                }
                else
                {
                    stk_fir.pop();
                }
            }
        }
        if(!stk_fir.empty())
        {
            chk=0;
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                if(stk_sec.empty())
                {
                    stk_sec.push(sec[i]);
                }
                else
                {
                    ll tp=stk_sec.top();
                    if(fir[i]==0)
                    {
                        stk_sec.push(0);
                    }
                    else
                    {
                        stk_sec.pop();
                    }
                }
            }
            if(!stk_sec.empty())
            {
                chk=0;
            }
        }
        if(chk)
        {
            cout<<"YES\n";
            for(ll i=0;i<n;i++){
				if(fir[i]==0){
					cout<<"(";
				}
				else{
					cout<<")";
				}
            }
            cout<<"\n";
            for(ll i=0;i<n;i++){
				if(sec[i]==0){
					cout<<"(";
				}
				else{
					cout<<")";
				}
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}