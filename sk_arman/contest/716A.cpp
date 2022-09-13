#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,a[100010],b,ck=1;
    cin>>n>>c;
    cin>>a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        b=a[i]-a[i-1];
        if(b<=c)
        {
            ck++;
        }
        else
        {
            ck=1;
        }
    }
    //ck=ck+1;
    if(ck==0)ck=1;
    cout<<ck<<endl;
    return 0;
}