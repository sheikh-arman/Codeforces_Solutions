//critical case  2 5
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,cnt=0;
    vector<int>v,v2;
    scanf("%d%d%d",&n,&a,&b);
    if(a>b)
        swap(a,b);
    for(int i=0; i<n; i++)
    {
        v.push_back(i+1);
    }
    while(v.size()>2)
    {
        cnt++;
        int x=v.size();
        for(int i=0; i<x-1; i+=2)
        {
            if(v[i]==a&&v[i+1]==b)
            {
                printf("%d\n",cnt);
                return 0;
            }
            else
            {
                if(v[i]<=a||v[i+1]<=a)
                {
                    if(v[i]==a)
                    {
                        v2.push_back(v[i]);
                    }
                    else if(v[i+1]==a)
                    {
                        v2.push_back(v[i+1]);
                    }
                    else{
                        v2.push_back(v[i]);
                    }
                }
                else
                {
                    if(v[i]==b)
                    {
                        v2.push_back(v[i]);
                    }
                    else if(v[i+1]==b)
                    {
                        v2.push_back(v[i+1]);
                    }
                    else{
                        v2.push_back(v[i]);
                    }
                }

            }
        }
        v.clear();
        v=v2;
        v2.clear();
    }
    printf("Final!\n");
    return 0;
}