#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,b,c,aa=0,bb=0,cc=0;
    cin>>n;

    while(n--){
        cin>>a>>b>>c;
        aa+=a;bb+=b;cc+=c;
    }
    if(aa||bb||cc)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    return 0;
}