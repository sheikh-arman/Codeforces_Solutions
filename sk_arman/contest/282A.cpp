#include<bits/stdc++.h>
using namespace std;
int main (){

    int a,ans=0;
    char s[5];
    cin>>a;
    while(a--){
        cin>>s;
        if(strcmp(s,"++X")==0||strcmp(s,"X++")==0){
            ans++;
        }
        else
            ans--;
    }
    cout<<ans<<endl;
    return 0;
}