#include<bits/stdc++.h>
using namespace std;
int main (){
    double a,b,d;
    double a1,b1;
   long long  int ans1,ans2;
    cin>>a>>b>>d;
     a1=a/d;
     b1=b/d;
     ans1=a1;
     ans2=b1;
     if(a1>(int)a1){
        ans1=a1+1;
     }
     if(b1>(int)b1){
        ans2=b1+1;
     }
     printf("%I64d\n",ans1*ans2);
    return 0;
}