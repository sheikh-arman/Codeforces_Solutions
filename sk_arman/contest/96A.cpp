#include<bits/stdc++.h>
using namespace std;
int main (){
    char ch[100];
    cin>>ch;
    if(strstr(ch,"1111111")||strstr(ch,"0000000"))
       cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}