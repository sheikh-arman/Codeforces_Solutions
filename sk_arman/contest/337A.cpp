#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>s;
    int n,m,c=76465465;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    while(m>=n){
       if(s[m-1]-s[m-n]<c)
        c=s[m-1]-s[m-n];
       m--;
    }
    cout<<c<<endl;
    return 0;
}