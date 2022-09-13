#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    ll n;
    n=s.size();
    vector<ll>V(n+1);
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            V[i]=1;
        }
        else if(s[i+1]=='A'&&s[i]=='B')
        {
            V[i]=2;
        }
        else
        {
            V[i]=0;
        }
    }
    ll first1=-1,last1=-1,first2=-1,last2=-1;
    for(ll i=0; i<n-1; i++)
    {
        if(V[i]==1)
        {
            if(first1==-1)
            {
                first1=i;
            }
            last1=i;
        }
        if(V[i]==2)
        {
            if(first2==-1)
            {
                first2=i;
            }
            last2=i;
        }
    }
    if((abs(first1-last2)>1||abs(last1-first2)>1)&&(first1!=-1&&first2!=-1))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}