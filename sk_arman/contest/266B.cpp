#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t;
    char ch[53];
    cin>>n>>t;
    getchar();
    for(int i=0;i<n;i++)
        cin>>ch[i];
    ch[n]='\0';
    while(t--){
            for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='B'&&ch[i+1]=='G'){
            ch[i]='G';
            ch[i+1]='B';
            i++;
        }
    }
    }
    cout<<ch<<endl;

    return 0;
}