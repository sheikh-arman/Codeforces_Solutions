#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,cnt1=0,cnt2=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n/2;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int j=0;
    for(int i=1;i<=n;i+=2){
        cnt1+=abs(v[j++]-i);
    }
    j=0;
    for(int i=2;i<=n;i+=2){
        cnt2+=abs(v[j++]-i);
    }
    cout<<min(cnt1,cnt2)<<endl;
}