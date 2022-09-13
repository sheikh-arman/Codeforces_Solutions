#include<bits/stdc++.h>
using namespace std;
int main (){
    int tcase;
    cin>>tcase;
    while(tcase--){
    string  s;
    cin>>s;
    int a=s.size();
    if(a>10)
    cout<<s[0]<<a-2<<s[a-1]<<endl;
    else
        cout<<s<<endl;
    }
    return 0;
}