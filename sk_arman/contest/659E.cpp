#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000010];
int color[1000010],label[1000010],ans=0,ck,n,e;
void dfsVisit(int node)
{
    color[node]=0;
    int SIZE=v[node].size();
    for(int i=0; i<SIZE; i++)
    {
        int x=v[node][i];
        if(color[x])
        {
            label[x]=label[node]+1;
            color[x]=0;
            //cout<<x<<endl;
           //  printf("%d %d %d\n",node,x,abs(label[node]-label[x]));
            dfsVisit(x);
        }
        else
        {
           // printf("e %d %d %d\n",node,x,abs(label[x]-label[node]));
            if(abs(label[x]-label[node])>1)
            {
                ck=0;//printf("sh\n");
            }
        }

    }
}
void dfs()
{
    for(int i=1; i<=n; i++)
    {
        if(color[i])
        {
            ck=1;
            dfsVisit(i);
            ans+=ck;
        }
    }
}
int main ()
{
    int a,b;
    cin>>n>>e;
    memset(color,1,sizeof(color));
    memset(label,0,sizeof(label));
    for(int i=1; i<=e; i++)
    {
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs();
    cout<<ans<<endl;
    return 0;
}