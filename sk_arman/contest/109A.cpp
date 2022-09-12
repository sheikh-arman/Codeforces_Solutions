#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    while(n){
        if(n%7){
            s+='4';
            n-=4;
        }
        if(n%7==0&&n){
            s+='7';
            n-=7;
        } 
        if(n<0){cout<<-1<<endl;return 0;}
    }
    cout<<s<<endl;
    return 0;
}