#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v1,v2;
    int ar1[1000],ar2[1000];
    memset(ar1,0,sizeof(ar1));
    memset(ar2,0,sizeof(ar2));
    int n,a,b,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        v1.push_back(a);
        v2.push_back(b);
        ar1[a]++;
        ar2[b]++;
    }
    for(int i=0;i<n;i++){
        if(ar2[v1[i]]){
            cnt+=ar2[v1[i]];
        }
    }
    cout<<cnt<<endl;
}