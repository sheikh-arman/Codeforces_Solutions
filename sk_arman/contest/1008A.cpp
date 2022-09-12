#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int ck=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u'){
                if(s[i]!='n'){
                        ck=1;
                        break;
                }
            }

        }
    }
    cout<<(ck==1?"NO":"YES")<<endl;
    return 0;
}