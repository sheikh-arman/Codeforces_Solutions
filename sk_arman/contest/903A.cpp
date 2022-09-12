#include<bits/stdc++.h>
using namespace std;
int chunk[110];
void ck(){
    for(int j=7;j<=100;j+=7){
            chunk[j]=1;
        }
    for(int i=3;i<=100;i+=3){
            chunk[i]=1;
        for(int j=i+7;j<=100;j+=7){
            chunk[j]=1;
        }
    }

}
int main (){
    ck();
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(chunk[x])
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
}