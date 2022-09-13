/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define PB push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V,V2;
        ll n,ck=0;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(ck==0)
            {
                V.PB(a);
            }
            else
            {
                V2.PB(a);
            }
            if(a==1)
            {
                ck=1;
            }
        }
        ll siz=V.size();
        ll siz2=V2.size();
        ck=0;
        for(ll i=siz-2; i>=0; i--)
        {
            if(V[i]!=V[i+1]+1)
            {
                ck=1;
                break;
            }
        }
        if(ck==0)
        {
            for(ll i=siz2-2; i>=0; i--)
            {
                if(V2[i]!=V2[i+1]+1)
                {
                    ck=1;
                    break;
                }
            }
        }
        if(ck==0)
        {
            cout<<"YES\n";
        }
        else
        {
            ck=0;
            ll cnt=2;
            for(ll i=0; i<siz2; i++)
            {
                if(V2[i]!=cnt)
                {
                    ck=1;
                    break;
                }
                cnt++;
            }
            if(ck==0)
            {
                for(ll i=0; i<siz-1; i++)
                {
                    if(V[i]!=cnt)
                    {
                        ck=1;
                        break;
                    }
                    cnt++;
                }
                if(ck==0)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }
///*****************************  ALHAMDULILLAH  *****************************/
}