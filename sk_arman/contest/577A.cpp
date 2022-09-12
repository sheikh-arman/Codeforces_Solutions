#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n,x,c=0;
    while(cin>>n>>x){c=0;
    for(int i=1;i*i<=x&&i<=n;i++){
        if(x%i==0&&i*n>=x){
                c++;
            if(x/i!=i&&(x/i)*n>=x)
                c++;
        }
    }
    cout<<c<<endl;}
    return 0;
}