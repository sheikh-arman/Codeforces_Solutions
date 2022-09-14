#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main(){
    int n,ans=0;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ans+=m[s];
    }
    cout<<ans<<endl;
}