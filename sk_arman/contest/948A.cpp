#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[502][502];
    int n,m,ck=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i][j]=='S'&&(c[i+1][j]=='W'||c[i][j+1]=='W')){
                ck=1;
                break;
            }
            if(c[i][j]=='W'&&(c[i+1][j]=='S'||c[i][j+1]=='S')){
                ck=1;
                break;
            }
            else if(c[i][j]!='S'&&c[i][j]!='W')
                c[i][j]='D';
        }
        if(ck==1)
            break;
    }
    if(ck==0){
            cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            printf("%c",c[i][j]);
        }
            printf("\n");
    }
}
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}