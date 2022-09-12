#include<bits/stdc++.h>
using namespace std;
int main (){
    string a,b;
    cin>>a>>b;
    for(int i=0;a[i]!='\0';i++)
        if(a[i]==b[i])
            cout<<0;
        else
            cout<<1;
    cout<<endl;
}