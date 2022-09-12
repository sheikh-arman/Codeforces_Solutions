#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main (){
    string s;
    cin>>s;
    int i=0,c=0,a0=0,a1=0,a20=0;
    //int l=s.size();
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1')
            a1++;
        else if(s[i]=='0'&&c==0)
            a0++;
        else if(s[i]=='0'&&c)
            ar[c]++;
        else if(s[i]=='2')
                c++;
    }
    for(int i=0;i<a0;i++)
        cout<<"0";
    for(int i=0;i<a1;i++)
        cout<<"1";
    for(int i=0;i<c;i++){
            cout<<"2";
        for(int j=0;j<ar[i+1];j++){
            cout<<"0";
        }
    }
        cout<<endl;
    return 0;
}