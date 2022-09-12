#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int x=0,ans=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='x')
            x++;
        else{
            if(x>2)
                ans+=x-2;
            x=0;
        }
    }
    if(x>2)
        ans+=x-2;
    cout<<ans<<endl;
    return 0;
}