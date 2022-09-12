#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3,t,m,ans=0,d4;
    scanf("%d%d%d",&d1,&d2,&d3);
    d4=d1+d2;
    ans=min(d1,d2)+min(d4,d3)+min(max(d1,d2),min(d1,d2)+d3);
    printf("%d\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}