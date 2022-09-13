#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,ans=0;
    vector<int>s;
    cin>>n>>k;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        s.push_back(a);
    }
    k=s[k-1];
    sort(s.begin(),s.end());
    int i;
    for(i=0;i<n;i++){
        if(s.at(i)>=k&&s.at(i)!=0)
            break;
    }
    //i++;
    ans=n-i;
    if(s[n-1]<=0){
        ans=0;
    }
    cout<<ans<<endl;

    return 0;
}