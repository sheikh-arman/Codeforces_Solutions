#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int c,a1,a0,t,n;
    char ch;
    while(cin>>t){
            a1=0;a0=0;
    for(int i=0;i<t;i++){
            cin>>ch;
        if(ch-48==1){
            a1++;
        }
        else{
             a0++;
    }
}
    if(a1>a0||a1==a0){
            a0*=2;
        t=t-a0;
    }
    else{
        a1*=2;
        t=t-a1;
    }
    cout<<t<<endl;
}
    return 0;

}