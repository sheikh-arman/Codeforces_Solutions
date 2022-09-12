#include<stdio.h>
int a1[1000];
int main (){
    int n,t,ans=0,max=0,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a1[n]++;
    }
    for( i=0;i<=1000;i++){
        
        if(a1[i]>max)
            max=a1[i];
    }
    printf("%d\n",max);
}