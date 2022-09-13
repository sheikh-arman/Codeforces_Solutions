#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,ans=0;
    int ar[6]={0};
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        ar[a]++;
    }
    ans=ans+ar[4];
    ans+=ar[3];
    ar[1]-=ar[3];
    ans+=ar[2]/2+ar[2]%2;
    ar[2]=ar[2]%2;
    //printf("%d %d %d %d\n",ar[1],ar[2],ar[3],ar[4]);
    if(ar[1]>=0){
        if(ar[2]==1)
            ar[1]-=2;
        if(ar[1]>=0)
        ans+=ceil(ar[1]/4.0);
    }
    printf("%d\n",ans);
    return 0;
}