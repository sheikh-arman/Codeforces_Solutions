#include<bits/stdc++.h>
using namespace std;
int ar[30],ar2[30];

int main (){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=0;s1[i]!='\0';i++){
        ar[s1[i]-'A']++;
    }
    for(int i=0;s2[i]!='\0';i++){
        ar[s2[i]-'A']++;
    }
    for(int i=0;s3[i]!='\0';i++){
        ar2[s3[i]-'A']++;
    }
    for(int i=0;i<30;i++){
        if(ar[i]!=ar2[i]){
        cout<<"NO"<<endl;
        return 0;
        }
    }
    cout<<"YES"<<endl;
}