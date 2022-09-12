#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int c=0,a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+5);
    for(int i=0;i<3;i++)
            if(a[i]==a[i+1])
                c++;
    cout<<c<<endl;
    return 0;
}