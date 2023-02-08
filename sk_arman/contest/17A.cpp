//Testing
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N= 1e5+10;
vector<bool>isprime(N,1);
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    isprime[0]=isprime[1]=false;
    isprime[2]=true;
    for(int i=3; i<N; i+=2)
    {
        if(isprime[i]==true)
        {
            for(int j=2*i; j<N; j+=i)
            {
                isprime[j]=false;
            }
        }
    }

    int n,k;
    cin>>n>>k;
    vector<int>v;
    v.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(isprime[i]==1)
        {
            v.push_back(i);
        }
    }

        ll c=0,sum=0;
        for(ll i=0; i<=(int)v.size()-2; i++)
        {
            sum += v[i]+v[i+1]+1;

            if(isprime[sum]==1 && sum<=n)
            {
                c++;
                //cout<<v[i]<< " "<<v[i+1];
                 //cout<<endl<<sum<<endl;
            }
            sum=0;
        }
        //cout<<c<<endl;
        if(c>=k)
            cout<<"YES"<<endl;
        else
            cout<< "NO"<<endl;
}