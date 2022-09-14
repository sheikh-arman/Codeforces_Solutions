#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int r=0,n;
    for(int i=0;s[i]!='\0';i++){
        n=r*10+(s[i]-48);
        r=n%4;//cout<<n<<" "<<r<<endl;
    }
    cout<<(r?0:4)<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}