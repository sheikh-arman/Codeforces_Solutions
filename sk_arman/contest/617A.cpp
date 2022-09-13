#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    if(n<5)
        cout<<"1"<<endl;
    else
        cout<<(n%5==0?n/5:n/5+1)<<endl;
}