#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    //cout<<toupper(a);
    int u=0,l=0;
    for(int i=0;a[i]!='\0';i++){
        if(isupper(a[i]))
            u++;
        else
            l++;
    }
    if(u<=l){
        for(int i=0;a[i]!='\0';i++)
            cout<<(char)tolower(a[i]);
    }
    else
        for(int i=0;a[i]!='\0';i++)
            cout<<(char)toupper(a[i]);
    cout<<endl;

}