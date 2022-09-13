#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        string s;
        cin>>s;
        ll ck=0;
        ll pos=0;
        for(ll i=0; s[i]!='\0'; i++)
        {
            if(s[i]!='a')
            {
                ck=1;
                pos=i;
                break;
            }
        }

        if(ck)
        {
            ll siz=s.size();
            ll baki=siz-pos;
            cout<<"YES\n";
            string an;

            for(ll i=0; i<baki; i++)
            {
                an+=s[i];
            }
            //cout<<
            an+='a';
            for(ll i=baki; i<siz; i++)
            {
                an+=s[i];
            }

            cout<<an<<"\n";

        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}