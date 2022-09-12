#include<bits/stdc++.h>
using namespace std;
int main (){

    int n,b,k,a;
    int ans=0;
    cin>>b>>k;
    for(int i=0;i<k-1;i++){
        cin>>a;
        if((a*b)&1){
            ans++;
        }
    }
    cin>>a;
        if(a&1){
            ans++;
        }
    if(ans&1){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }

    return 0;
}