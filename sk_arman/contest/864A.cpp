#include<bits/stdc++.h>
#define sff(n, m) scanf("%d %d",&n,&m)
using namespace std;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,ar[200]= {0},x=150,y=151,cnt=0;
        cin>>n;
        set<int>s;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(ar[a]==0)
            {
                if(cnt==0)
                    x=a;
                else
                    y=a;
                cnt++;
            }
            ar[a]++;


        }
        if(cnt==2&&ar[x]==ar[y])
        {
            printf("YES\n%d %d\n",x,y);
        }
        else
        {
            printf("NO\n");
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}