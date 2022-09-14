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
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        for(ll i=0; i<3; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        if(V[1]-V[0]==V[2]-V[1])
        {
            cout<<"YES\n";
            continue;
        }
        ll new_a=(2*V[1])-V[2];
        ll ck=0;
        if(new_a>0&&new_a%V[0]==0)
        {//cout<<new_a<<"";
            ll dif=V[1]-new_a;
            if(dif==V[2]-V[1])
            {
                ck=1;//cout<<" f\n";
            }

        }
        ll new_b=(V[0]+V[2])/2;
        if(new_b>0&&new_b%V[1]==0&&(V[0]+V[2])%2==0)
        {
            ll dif=new_b-V[0];
            if(dif==V[2]-new_b)
            {
                ck=1;//cout<<" f2\n";
            }
        }
        ll new_c=(2*V[1])-V[0];
        if(new_c>0&&new_c%V[2]==0)
        {
            ll dif=V[1]-V[0];
            if(dif==new_c-V[1])
            {
                ck=1;//cout<<" f3\n";
            }
        }
        if(ck==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}