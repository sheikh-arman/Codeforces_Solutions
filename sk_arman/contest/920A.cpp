#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[202];
    int n,k,tcase;
    scanf("%d",&tcase);
    while(tcase--){
            int gard[202]={0},c=0,j=0,i,x;
        scanf("%d%d",&n,&k);
        for(i=0;i<k;i++){
            cin>>a[i];
        }

        for(j=0;j<=n;j++){
            for( x=0;x<k;x++){
                if(gard[a[x]+j]==0&&a[x]+j<=n){
                    c++;
                    gard[a[x]+j]=1;
                   // printf("%d\n",c);
                    if(a[x]-j>=1){
                        if(gard[a[x]-j]==0){
                            c++;
                        gard[a[x]-j]=1;
                        //printf("%d\n",c);
                        }
                }
            }
            else if(a[x]-j>=1){
                if(gard[a[x]-j]==0){
                            c++;
                        gard[a[x]-j]=1;
                       // printf("%d\n",c);
                        }
            }
        }
        if(c==n){
                  //  printf("sadauydt");
                break;
            }
        //break;
    }
    printf("%d\n",j+1);
    }
    return 0;
}