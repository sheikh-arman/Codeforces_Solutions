#include<bits/stdc++.h>
using namespace std;
int main (){
    string str;
    int l=0,p=0;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='o')
            p++;
        else
            l++;
    }
    if (!p || l%p==0)
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}