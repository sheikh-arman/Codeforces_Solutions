#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c=1;
    cin>>a>>b;
    for(int i=0;i<a-1;i+=2){
            for(int j=0;j<b;j++)
                cout<<"#";
                cout<<endl;
        if(c==1){
            for(int j=0;j<b-1;j++){
                cout<<".";
            }
            cout<<"#";c=2;
        }
        else{
            cout<<"#";
            for(int j=0;j<b-1;j++){
                cout<<".";
                c=1;
            }
        }
        cout<<endl;
    }
    for(int j=0;j<b;j++)
                cout<<"#";
                cout<<endl;
}