#include<bits/stdc++.h>
using namespace std;
int main (){
    char s[11],s2[11];
    cin>>s;
    int i=strlen(s)-1;
    while(s[i]=='0'){
        s[i]='\0';
        i--;
    }
    strcpy(s2,s);
    strrev(s);
    i=strlen(s)-1;
    while(s[i]=='0'){
        s[i]='\0';
        i--;
    }
    strrev(s2);
    i=strlen(s2)-1;
    while(s[i]=='0'){
        s[i]='\0';
        i--;
    }
    strrev(s2);
    //cout<<s<<endl<<s2<<endl;
    if(strcmp(s2,s)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}