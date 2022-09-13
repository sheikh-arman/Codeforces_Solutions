#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll s_one[2000000];
ll s_zero[2000000];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        string sa,sb;
        ll n;
        cin>>n;
        for(ll i=0;i<=n;i++){
			s_one[i]=s_zero[i]=0;
        }
        cin>>sa>>sb;
        //cout<<sa<<"\n"<<sb<<"\n";
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(sa[i]=='1')cnt++;
            s_one[i]=cnt;
        }
        cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(sa[i]=='0')cnt++;
            s_zero[i]=cnt;
        }
        ll swp=0;
        ll chk=1;
        for(ll i=n-1; i>=0; i--)
        {
            swp%=2;
            if(swp==0)
            {
                if(sa[i]!=sb[i])
                {
                    if(s_one[i]==s_zero[i])
                    {
                        swp++;
                    }
                    else
                    {
                        chk=0;
                        break;
                    }
                }
            }
            else
            {
                if(sa[i]==sb[i])
                {
                    if(s_one[i]==s_zero[i])
                    {
                        swp++;
                    }
                    else
                    {
                        chk=0;
                        break;
                    }
                }
            }
        }
        if(chk){
			cout<<"YES\n";
        }
        else{
			cout<<"NO\n";
        }

    }
    return 0;
}