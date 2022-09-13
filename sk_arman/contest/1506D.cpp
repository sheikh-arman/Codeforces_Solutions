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
        vector<ll>V;
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        sort(V.begin(),V.end());
        vector<ll>ase;
        for(ll i=0; i<n; i++)
        {
            ll cnt=1;
            ll left=i+1;
            while(left<n)
            {
                if(V[left]!=V[i])
                {
                    break;
                }
                left++;
                cnt++;
            }
            ase.PB(cnt);
            i=left-1;
        }
        n=ase.size();
        sort(ase.begin(),ase.end());
        reverse(ase.begin(),ase.end());
        ll cn=ase[0],sum=0;
        for(ll i=1; i<n; i++)
        {
            sum+=ase[i];
        }
        ll ans=0;
        //cout<<cn<<" "<<sum<<" fu\n";
        if(cn>sum)ans=cn-sum;
        else if((sum+cn)%2!=0)ans=1;
        cout<<ans<<"\n";

    }
    return 0;
}