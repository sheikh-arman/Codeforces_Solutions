#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t,m,a1[1002],b1[1002],cnt=0;;
    cin>>n>>m;
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
            int x;
        cin>>x;
        q.push(x);
    }
    int aa;
    aa=q.front();
    for(int i=0;i<n;i++){
        if(a1[i]<=aa){
            cnt++;
            q.pop();
            if(!q.empty())
                aa=q.front();
            else
                aa=-11111;
        }
    }
    cout<<cnt<<endl;

    return 0;
}