#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int h,e=1110,l1=1002,l2=1000,o=0;
    h=s.find("h");
    for(int i=h+1; s[i]!='\0'; i++)
    {

        if(s[i]=='l'&&i>e)
            l1=min(l1,i);
        if(s[i]=='l'&&i>l1)
            l2=min(l2,i);
        else if(s[i]=='e'&&i>h&&h!=-1)
            e=min(e,i);
        else if(s[i]=='o')
            o=max(o,i);
    }
    if(h!=-1&&h<e&&e<l1&&l1<l2&&l2<o)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
return 0;
}