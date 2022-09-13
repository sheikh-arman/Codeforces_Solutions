#include<bits/stdc++.h>
using namespace std;
int dsum(int n2){
    int sum=0;
     while(n2){
            sum+=n2%10;
            n2/=10;
        }
        return sum;
}
int main (){
    int n,n2,cdigit,t,i,start,c;
//    freopen("uva 1593 in.txt","r",stdin);
//    freopen("uva 1593 out.txt","w",stdout);
        while(scanf("%d",&n)!=EOF){
            cdigit=0;
            c=0;
           int ans[50]={0};

        n2=n;
        while(n2){
            cdigit++;
            //printf("%d\n",cdigit);
            n2/=10;
        }
       start= n-(9*(cdigit));
       if(n<10){
        start=0;
       }
    for( i=start;i<n;i++){
           // printf("%d\n",i);
        if(i+dsum(i)==n){
                ans[c]=i;
                //printf("%d\n",ans);
            c++;
        }
    }
    printf("%d\n",c);
    for(int j=0;j<c;j++){
        printf("%d\n",ans[j]);
    }
    }
    return 0;
}