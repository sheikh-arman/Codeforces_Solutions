#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
//#define vec(a) vector<int>a

int main ()
{
    long int n,t,a;
    //freopen("input.txt","r",stdin);
    cin>>n>>t;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    int ans=0,ck=1;
    double an;
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i]>ans){
            ans=v[i+1]-v[i];
        }
    }
    an=ans/2.0;
    if(v[0]>an){
        an=v[0];ck=0;
    }
    if(t-v[n-1]>an){
        an=(t-v[n-1]);ck=0;
    }

    printf("%lf\n",an);

    return 0;
}