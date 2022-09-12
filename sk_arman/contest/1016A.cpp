#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
vector<long long int>vec;
int main (){
    long long int n,m,a,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        vec.pb(sum/m);
    }
    cout<<vec[0]<<" ";
    for(int i=1;i<n;i++){
        cout<<abs(vec[i]-vec[i-1])<<" ";
    }
    return 0;
}