#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,ans=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1&&b==1&&c==1)
        ans=3;
    else if(a==1&&b!=1&&c==1)
        ans=a+b+c;
    else if(a!=1&&b==1&&c==1)
        ans=2*a;
    else if(a==1&&b==1&&c!=1)
        ans=2*c;
    else if(a==1&&b!=1&&c!=1)
        ans=(a+b)*c;
    else if(a!=1&&b==1&&c!=1)
        ans=(b+min(a,c))*max(a,c);
    else if(a!=1&&b!=1&&c==1)
        ans=a*(b+c);
    else
        ans=a*b*c;
    printf("%d\n",ans);
    return 0;
}