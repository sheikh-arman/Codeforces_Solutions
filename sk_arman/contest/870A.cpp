#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,a,b,ans;
    int dn[11]={0},dm[11]={0};
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a),dn[a]=1;
    for(int i=0;i<m;i++)
        scanf("%d",&b),dm[b]=1;
    for(int i=1;;i++){
            int ch=i;
            int c1=0,c2=0;
        while(ch){
            int k=ch%10;
            if(dm[k]==1)
                c1++;
            if(dn[k]==1)
                c2++;
                ch/=10;
        }
        if(c2!=0&&c1!=0){
            ans=i;break;
        }
    }
    printf("%d\n",ans);
    return 0;
}