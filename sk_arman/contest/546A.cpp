#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,n,w,s,cost;
    scanf("%d%d%d",&k,&n,&w);
    cost=(k*(w+1)*w)/2;
        cout<<(cost-n>=0?cost-n:0)<<endl;
    return 0;
}