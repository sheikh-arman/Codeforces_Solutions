#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,a,ck=0,sum=0;
    cin>>n>>k;
    a=240-k;
    for(int i=1;sum<a;i++)
    {
        sum+=i*5;ck++;
        if(sum>=a||ck>=n){
                if(sum>a)
                ck--;
            break;}

    }
    cout<<ck<<endl;
    return 0;
}