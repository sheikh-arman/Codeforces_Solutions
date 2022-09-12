#include<bits/stdc++.h>
using namespace std;
int main (){
    int s,n,x,y;
    int a[10010],b[10010];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin>>s>>n;
    while(n--){
        cin>>x>>y;
        a[x]+=y;
        b[x]=1;
    }
    for(int i=0;i<10010;i++){
            if(s>i&&b[i]){
                s+=a[i];
            }
            else if(s<=i&&b[i]){
                    cout<<"NO"<<endl;
                return 0;
            }

    }
    cout<<"YES"<<endl;
    return 0;
}