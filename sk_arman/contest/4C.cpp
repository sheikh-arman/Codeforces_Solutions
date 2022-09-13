#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int main (){
     int n;
     string s;
     cin>>n;
     while(n--){
        cin>>s;
        if(m[s]==0)
            printf("OK\n");
        else
            cout<<s<<m[s]<<endl;
        m[s]+=1;
     }
    return 0;
}