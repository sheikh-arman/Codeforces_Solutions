#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v;
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='+'){
            v.push_back(str[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++){
        cout<<"+";
        cout<<v[i];
    }
    cout<<endl;
    v.clear();
    return 0;
}