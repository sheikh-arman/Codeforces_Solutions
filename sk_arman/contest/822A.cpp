#include<stdio.h>
int main(){
    int a,b,c;long long ans=1;scanf("%d%d",&a,&b);(a>b?c=b:c=a);
    for(int i=2;i<=c;i++)ans*=i;
    printf("%I64d\n",ans);}