#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
        if(s[i]=='A')
        a++;
    else
        d++;
    if(a==d)
        cout<<"Friendship"<<endl;
    else
        cout<<(a>d?"Anton":"Danik")<<endl;
}