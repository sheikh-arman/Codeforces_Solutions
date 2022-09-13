/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll n;
string s;
//ll chache[200010][30];
ll precal[200010][30];
ll dp(ll i,ll j,ll val)
{
    if(i==j)
    {
        return (precal[i][val]-precal[i-1][val])==0;
    }
    ll left=((j-i+1)/2)-(precal[(i+j)/2][val]-precal[i-1][val])+dp(((i+j)/2)+1,j,val+1);
    ll right=((j-i+1)/2)-(precal[j][val]-precal[(i+j)/2][val])+dp(i,(i+j)/2,val+1);
    return min(left,right);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n;
        cin>>s;
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<26; j++)
            {
                precal[i][j]=0;
            }
        }
        for(ll i=0; i<n; i++)
        {
            precal[i+1][s[i]-'a']++;
        }
        for(ll i=2; i<=n; i++)
        {
            for(ll j=0; j<26; j++)
            {
                precal[i][j]+=precal[i-1][j];
                //chache[i][j]=-1;
            }
        }
        ll ans=dp(1,n,0);
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}