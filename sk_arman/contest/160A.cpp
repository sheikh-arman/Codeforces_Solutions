#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0,cnt=0,sum2=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
            sum2+=v[i];
            ++cnt;
        if(sum2>sum/2)
            break;
    }
    cout<<cnt<<endl;
    v.clear();
    return 0;
}