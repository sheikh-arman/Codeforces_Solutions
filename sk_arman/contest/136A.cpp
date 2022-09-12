#include<bits/stdc++.h>
using namespace std;
int main(){
    int gift[110],result[110],n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>gift[i];
        result[gift[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}