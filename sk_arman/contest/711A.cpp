#include<bits/stdc++.h>
using namespace std;
int main (){
    string s[2000];
    string a;
    int n,ck=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a[0]=='O'&&a[1]=='O'&&ck){
            ck=0;
            a[0]='+';
            a[1]='+';
        }
        else if(a[3]=='O'&&a[4]=='O'&&ck){
            ck=0;
            a[3]='+';
            a[4]='+';
        }
        s[i]=a;
    }
    if(ck){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<s[i]<<endl;
        }
    }
}