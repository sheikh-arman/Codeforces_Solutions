
/**      BU_Excalibur      **/
/** University of Barishal **/
/**  BFS  GRID **/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll label[55][55],n,m,cnt;
string s[55];
void bfs(ll x,ll y)
{
    cnt=0;
    if(s[x][y]=='#')return;
    memset(label,-1,sizeof(label));
    queue< pair<ll,ll> >q;
    label[x][y]=0;
    q.push({x,y});
    while(!q.empty())
    {
        pair<ll,ll> parent=q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll childx=parent.first+dx[i];
            ll childy=parent.second+dy[i];
            if(childx>=0&&childx<n&&childy>=0&&childy<m)
            {
                if(s[childx][childy]!='#'&&label[childx][childy]==-1)
                {
                    if(s[childx][childy]=='G'){
                        cnt++;
                    }
                    label[childx][childy]=1;
                    q.push({childx,childy});
                }
            }

        }
    }
}
int main()
{
    /***************************************/
    /// Site Name        : CF
    /// Problem No/ID    : 1365D. Solve The Maze
    /***************************************/

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            cin>>s[i];
        }
        ll cnt2=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(s[i][j]=='B'){
                    for(ll k=0;k<4;k++){
                        ll x=i+dx[k];
                        ll y=j+dy[k];
                        if(x>=0&&x<n&&y>=0&&y<m){
                            if(s[x][y]=='.')s[x][y]='#';
                            else if(s[x][y]=='G')cnt2+=1000000000;
                        }
                    }
                }
                if(s[i][j]=='G')cnt2++;
            }
        }
        bfs(n-1,m-1);
        if(cnt==cnt2){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************///
}