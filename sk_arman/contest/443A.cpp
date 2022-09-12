#include<bits/stdc++.h>
using namespace std;
int ar[30],c;
int main (){
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>64&&s[i]<91)
            ar[s[i]-'A']=1;
        else if(s[i]<123&&s[i]>96)
            ar[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++)
        if(ar[i]==1)
        c++;
    cout<<c<<endl;
}