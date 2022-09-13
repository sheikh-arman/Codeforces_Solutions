#include<bits/stdc++.h>
using namespace std;
int main (){
    char a[110];
    gets(a);
    if(strstr(a,"H")||strstr(a,"Q")||strstr(a,"9"))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}