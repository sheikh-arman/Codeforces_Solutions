/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define PB push_back
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,mx=0;
        cin>>n;
        string s,ans;
        cin>>s;
        for(ll i=0; i<26; i++)
        {
            for(ll j=0; j<26; j++)
            {
                string s2;
                s2+=(char)(i+'A');
                s2+=(char)(j+'A');
                ll cnt=0;
                for(ll k=0; k<n-1; k++)
                {
                    if(s[k]==s2[0]&&s[k+1]==s2[1])cnt++;
                }
                if(cnt>mx)
                {
                    mx=cnt;
                    ans=s2;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}