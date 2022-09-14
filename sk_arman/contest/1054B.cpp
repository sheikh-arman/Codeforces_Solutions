#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ma=-1,cnt=0,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);cnt++;
        if(a<=ma+1) ma=max(a,ma);
        else{ printf("%d\n",cnt);return 0;
        }
    }
     printf("-1\n");
///*****************************  ALHAMDULILLAH  *****************************/
}