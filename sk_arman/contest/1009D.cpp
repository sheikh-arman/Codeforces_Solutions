#include<bits/stdc++.h>
using namespace std;
vector<int>v[100004];
int gcd(int i,int j){
    if(j%i==0){
        return i;
    }
    else
        return gcd(j%i,i);
}
int main (){
    int n,e,cnt=0;
    cin>>n>>e;
    for(int i=1;i<n&&cnt<=e;i++){
        for(int j=i+1;j<=n&&cnt<=e;j++){
            if(gcd(i,j)==1){
                    v[i].push_back(j);
                    //v[j].push_back(i);
                   // cout<<i<<" "<<j<<endl;
                    cnt++;
                }
            }
        }
    int br=0;
    if(cnt>=e&&e>=n-1){
        cout<<"Possible"<<endl;
        for(int i=1;i<=n;i++){
            for(int j=0;j<v[i].size();j++){
                cout<<i<<" "<<v[i][j]<<endl;
                br++;
                if(br==e)
                    return 0;
            }
            if(br==e)
                    return 0;
    }
    }
    else{
        cout<<"Impossible"<<endl;
    }

    return 0;
}