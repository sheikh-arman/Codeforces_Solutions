#include<stdio.h>
int main (){
    long long int n,k;
    while(scanf("%lld %lld",&n,&k)!=EOF){
    if(n%2==0){
            if(k<=n/2){
        printf("%lld\n",(2*k)-1);
    }
    else{
            k=k-n/2;
            k*=2;
        printf("%lld\n",k);
    }
    }
    else{
        if(k<=(n/2)+1){
        printf("%lld\n",(2*k)-1);
    }
    else{
            k=k-n/2;
            k*=2;
        printf("%lld\n",k-2);
       }
     }
    }
    return 0;
}