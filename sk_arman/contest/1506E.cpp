#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll rep[2000010];
ll Fin(ll n)
{
    return (rep[n]==n?n:rep[n]=Fin(rep[n]));
}
int main()
{
   // freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        ll n;
        bitset<2000010>color_small,color_big,ck;
        cin>>n;
        ll mi=0,cnt=1;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            rep[i+1]=i+1;
        }
        for(ll i=0; i<n; i++)
        {
            ll a=V[i];
            if(a>mi)
            {
                ck[a]=1;
                color_small[a]=1;
                mi=a;
                cout<<a<<" ";
            }
            else
            {
                while(1)
                {
                    if(color_small[cnt]==0)
                    {
                        cout<<cnt<<" ";
                        color_small[cnt]=1;
                        cnt++;
                        break;
                    }
                    else
                    {
                        cnt++;
                    }
                    //  cout<<" xzd\n";
                }
            }
        }
        cout<<"\n";
        cnt=1,mi=0;;
        for(ll i=0; i<n; i++)
        {
            if(V[i]>mi)
            {
                mi=V[i];
                color_big[V[i]]=1;
                rep[V[i]]=Fin(V[i]-1);
                cout<<V[i]<<" ";
                cnt=mi-1;
            }
            else
            {
//            	cout<<cnt<<" xx";
//            	for(ll x=1;x<=n;x++){
//					cout<<Fin(x)<<" ";
//            	}
//            	cout<<" xx\n";
                cnt=Fin(cnt);
                cout<<cnt<<" ";
                color_big[cnt]=1;
                rep[cnt]=Fin(cnt-1);
            }
        }
        cout<<"\n";
    }
    return 0;
}