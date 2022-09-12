#include<bits/stdc++.h>
using namespace std;
map<string, vector<string> > v;
int n,e,ma;
map<string,int>clr;
map<string,int>len;
string up(string s){
    int l=s.length();
    for(int i=0;i<l;i++)
        s[i]=toupper(s[i]);
    return s;
}
void bfs(string start){
    queue<string>q;
    q.push(start);
    while(!q.empty()){
        string x=q.front();
        q.pop();
        clr[x]+=1;
        for(int i=0;i<v[x].size();i++){
            if(clr[v[x][i]]==0){
                q.push(v[x][i]);
                len[v[x][i]]=len[x]+1;
                if(len[v[x][i]]>=ma)
                    ma=len[v[x][i]];
            }
        }
        clr[x]+=1;
    }

}
int main (){
    //freopen("input.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++){
            string a,b,c;
            cin>>a>>b>>c;
            a=up(a);c=up(c);
            clr[a]=0;
        v[c].push_back(a);
    }
    len["POLYCARP"]=1;
    bfs("POLYCARP");
    cout<<ma<<endl;
    return 0;
}