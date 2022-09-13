#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,b,c,ck=0;
    cin>>n;
    while(n--){
        cin>>a;
        b=sqrt(a);
        if(b*b!=a){
            ck++;
                if(ck==1&&a!=0){
                    c=a;
                }
            if(a>c&&a!=0){
                c=a;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}