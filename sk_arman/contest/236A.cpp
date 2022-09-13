#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch[102];
    cin>>ch;
    int ar[200]={0},cnt=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ar[ch[i]]==0){
            cnt++;ar[ch[i]]=1;
        }
    }
    if(cnt%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}