#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b=0,cnt=0,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a>=b){
            cnt++;
            if(cnt>ans)
                ans=cnt;
        }
        else
            cnt=1;
    b=a;
    }
    printf("%d",ans);
}