#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int main (){
    int n,t;
    int ar2[55];
    vector<int>v;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>ar2[i];
    }
    v.push_back(ar2[t-1]);
    ar[ar2[t-1]]=1;
    for(int i=t-1;i>=0;i--){
        if(ar[ar2[i]]==0){
            v.push_back(ar2[i]);
            ar[ar2[i]]=1;
        }
    }
    int l=v.size();
    cout<<l<<endl<<v[l-1];
    for(int i=l-2;i>=0;i--){
        cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}