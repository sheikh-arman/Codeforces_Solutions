#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char ch[105],ch2[105];
    cin>>ch;
    int a=0,i;
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]!='a'&&ch[i]!='A'&&ch[i]!='e'&&ch[i]!='E'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='I'&&ch[i]!='O'&&ch[i]!='U'&&ch[i]!='y'&&ch[i]!='Y'){
            ch2[a]=ch[i];
            a++;
        }
    }
    ch2[a]='\0';
    for(int i=0;ch2[i]!='\0';i++){
            cout<<".";
          if(ch2[i]<=90&&ch2[i]>=65){
                ch2[i]+=32;
               }
        cout<<ch2[i];
    }
    if(ch2[0]!='\0')
        cout<<endl;

    return 0;
}