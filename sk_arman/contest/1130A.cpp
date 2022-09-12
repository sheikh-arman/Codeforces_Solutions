#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a,b,w1,h1,w2,h2,ans=0,cnt=0,ck=0,cka=0,ckb=0,mx=0,dr=0,pos,ma=-1,cnt1=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>0)
            cnt++;
        if(a<0)
            cnt1++;
//v.push_back(a);
    }
    //sort(v.begin(),v.end());
    int x=n/2+(n%2!=0);
    if(cnt>=x){
        printf("1\n");
    }
    else if(cnt1>=x){
        printf("-1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}