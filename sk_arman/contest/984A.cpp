#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,n,v[200000];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
    v[i]=n;
    }
    sort(v,v+t);
    if(t%2==0)
        cout<<v[(t/2)-1]<<endl;
    else
        cout<<v[t/2]<<endl;
    return 0;
}