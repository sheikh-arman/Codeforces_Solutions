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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==1&&k){
            s[0]='0';k=0;
        }
        if(s[0]!='1'&&k>0)
        {
            s[0]='1';
            k--;
        }
        for(int i=1; i<n&&k; i++)
        {
            if(s[i]!='0')
            {
                s[i]='0';
                k--;
            }
        }
        cout<<s;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}