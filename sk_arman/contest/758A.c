#include <stdio.h>
int main ()
{
    int n[99],i,sum=0,t,ex,j,sum1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
            scanf("%d",&n[i]);
    }
    for(i=1,j=0;i<t;i++){
        if(n[j]<n[i]){
            ex=n[i];
            n[i]=n[j];
            n[j]=ex;
        }
    }
    for(j=1;j<t;j++){
        if(n[j]<n[0]){
                sum1=n[0]-n[j];
            sum=sum+sum1;
        }
    }
    printf("%d\n",sum);
    return 0;
}