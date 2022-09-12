#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a+k<=5)
            cnt++;
    }
    cout<<cnt/3<<endl;
    return 0;
}