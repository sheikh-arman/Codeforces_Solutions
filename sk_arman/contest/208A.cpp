#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch[210];
    int c=0,d=0;
    cin>>ch;
    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]=='W'&&ch[i+1]=='U'&&ch[i+2]=='B'){
            i+=2;
            c=1;
        }
        else{
            if(c==1)
                printf(" ");
            printf("%c",ch[i]);
            c=0;
            d=1;
        }
    }
    //cout<<endl;
    return 0;
}