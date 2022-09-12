#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        if(a%2==0&&a!=1){
            cout<<a-1<<" ";
//           if(n!=1)
//                cout<<" ";
        }
        else{
            cout<<a<<" ";
//        if(n!=1)
//                cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}