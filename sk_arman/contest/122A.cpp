#include<bits/stdc++.h>
using namespace std;
int lky[1002];
void lucky()
{
    int j,ck;
    for(int i=4; i<=1002; i+=1)
    {
        int a=i;
        ck=0;
        if(lky[i]!=1)
        {
            for(j=0; a!=0;)
            {
                ++j;
                if(a%10==4||a%10==7)
                    ck++;
                else
                    break;
                a/=10;
            }
            if(ck==j)
                for(int k=i; k<1003; k+=i)
                    lky[k]=1;
        }
    }
}
int main ()
{
    lucky();
    int n;
    scanf("%d",&n);
    if(lky[n]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}