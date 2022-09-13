#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,cnt=0;
    cin>>n;
   for(int i=1;i<=n/2;i++){
            m=n-i;
        if(m%i==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;




    return 0;
}