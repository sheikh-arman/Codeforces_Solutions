#include <stdio.h>
int main ()
{
    int n,i,a,ans,j;
    while(scanf("%d",&n)!=EOF){
    for(i=1;i<=1000;i++){
        a=n*i+1;
        for(j=2;j<=a/2;j++){
            if(a%j==0){
                ans=i;
                break;
            }
        }
        if(ans==i){
            break;
        }
    }
    printf("%d\n",ans);
    ans=0;
    }
    return 0;
}