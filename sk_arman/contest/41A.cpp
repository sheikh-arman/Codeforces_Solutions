#include<bits/stdc++.h>
using namespace std;
int main (){
    char ch[102],rev[102];
    cin>>ch>>rev;
    cout<<(strcmp(rev,strrev(ch))==0?"YES":"NO")<<endl;
}