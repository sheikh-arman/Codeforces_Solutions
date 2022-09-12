#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,cnt=1;
    cin>>n;
    cin>>b;
    n--;
    while(n--){
        cin>>a;
        if(a!=b)
            cnt++;
        b=a;
    }
    cout<<cnt<<endl;
    return 0;
}