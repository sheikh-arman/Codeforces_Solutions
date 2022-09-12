#include<bits/stdc++.h>
using namespace std;
int ar[110],ar2[110];
int main (){
int n,m,j=0,MAX_DAY=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a;
        cin>>a;
        ar[a]++;
    }
    sort(ar,ar+101);
    for(int i=100;i>=101-m;i--){
        if(ar[i]){
            ar2[j++]=ar[i];
        }
    }
    for(int i=1;i<=m;i++){
            int cnt=0;
        for(int k=0;k<j;k++){
            cnt+=ar2[k]/i;
        }
        if(cnt>=n)
            MAX_DAY=i;
    }
    cout<<MAX_DAY<<endl;
    return 0;
}