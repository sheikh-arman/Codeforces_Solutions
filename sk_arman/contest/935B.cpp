#include<bits/stdc++.h>
using namespace std;
int main (){
    int a=0,b=0,cnt=0,n,ac=0,bc=0,pri=0;
    cin>>n;
    getchar();
    char s;
    while(n--){

            scanf("%c",&s);
        if(s=='U'){
            a++;
            if(pri==1&&ac==1){
               cnt++;
            }
                ac=1;bc=0;
        }
        else{
            b++;
            if(pri==1&&bc==1){
               cnt++;
            }
                bc=1;ac=0;
        }
        if(a==b){
                pri=1;
        }
        else
            pri=0;
       // cout<<a<<b<<endl;
    }
        cout<<cnt<<endl;

    return 0;
}