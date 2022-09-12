#include<bits/stdc++.h>
using namespace std;
int male[110],female[110];
int main (){
    int n,m,cnt=0;
    memset(male,0,sizeof(male));
    memset(female,0,sizeof(female));
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        male[a]++;
    }
     cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        female[a]++;
    }
    for(int i=1;i<102;i++){
            while(male[i]){
        if(female[i-1]){
            cnt++;female[i-1]--;
        }
        else if(female[i]){
            cnt++;female[i]--;
        }
        else if(female[i+1]){
            cnt++;female[i+1]--;
        }
        male[i]--;
}
    }
    cout<<cnt<<endl;

    return 0;
}