#include<bits/stdc++.h>
using namespace std;
int main (){
    string a;
    int ck=1;
    getline(cin,a);
    for(int i=1;a[i]!='\0';i++){
        if(a[i]>96){
            ck=0;break;
        }
        else{
            ck=1;
        }
    }
    if(ck==1){
        for(int i=0; a[i]!='\0'; i+=1)
        {
            if(a[i]<91)
                cout<<(char)tolower(a[i]);
            else
                cout<<(char)toupper(a[i]);
        }
        cout<<endl;
    }
    else
        cout<<a<<endl;
    return 0;
}