#include<bits/stdc++.h>
using namespace std;
vector<int>v[20014];
int visit[20012];
int label[20012];
queue<int>q;
void bfs(int node){
    visit[node]=1;
    q.push(node);
    while(!q.empty()){
        int x=q.front();
        q.pop();
    for(int i=0;i<v[x].size();i++){
        int a=v[x][i];
        if(visit[a]==0){
                q.push(a);
            label[a]=label[x]+1;
        }
    }
    visit[x]=1;
    }
}
int main (){
    int n,m;
    for(int i=1;i<10002;i++){
        v[i].push_back(i-1);
        v[i].push_back(i*2);
    }
    cin>>n>>m;
    bfs(n);
    cout<<label[m]<<endl;
    return 0;
}