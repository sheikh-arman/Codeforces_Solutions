#include<bits/stdc++.h>
using namespace std;
int main (){
    int ar[6],s=0,ck=1;
    vector<int>v;
    for(int i=0;i<6;i++){
        cin>>ar[i];
        s+=ar[i];
    }
    for(int i=0;i<6&&ck;i++){
        for(int j=0;j<6&&ck;j++){
            for(int k=0;k<6&&ck;k++){
                if(i!=j&&i!=k&&j!=k){
                    int sum=ar[i]+ar[j]+ar[k];
                    if(sum==(s-sum)){
                        ck=0;
                    }
                }
            }
        }
    }
    cout<<(ck==0?"YES":"NO")<<endl;
}