#include<bits/stdc++.h>
using namespace std;
int main (){
    char ch[55];
    int a,ans=0;
    cin>>a;
    cin>>ch[0];
    for(int i=1;i<a;i++){
        cin>>ch[i];
        if(ch[i]==ch[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}