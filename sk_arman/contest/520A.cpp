#include<bits/stdc++.h>
using namespace std;
int ar[30],c;
int main (){
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]>96)
            ar[s[i]-'a']=1;
        else
            ar[s[i]-'A']=1;
    }
    for(int i=0;i<26;i++)
    if(ar[i]!=1){
           c=1;break;
    }
    cout<<(c==0?"YES":"NO")<<endl;
}