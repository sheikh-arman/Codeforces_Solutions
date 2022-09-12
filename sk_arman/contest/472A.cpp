#include<bits/stdc++.h>
using namespace std;
#define MAX 2000001
int prime_ck[2000001];
void seive(){
    prime_ck[0]=prime_ck[1]=1;
    for(int i=4;i<=MAX;i+=2){
        prime_ck[i]=1;
    }
    for(int i=3;i<=MAX;i+=2){
        if(prime_ck[i]==0){
            for(int j=i+i;j<=MAX;j+=i){
                prime_ck[j]=1;
            }
        }
    }
}
int main (){
    seive();
    int n;
    cin>>n;
    for(int i=n-4;i>=n/2;i--){
        if(prime_ck[i]==1&&prime_ck[n-i]==1){
            cout<<n-i<<" "<<i<<endl;
            return 0;
        }
    }
}