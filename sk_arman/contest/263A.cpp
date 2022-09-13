#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    int ar[6][6];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                a=i;b=j;
                a++;b++;
            }
        }
    }
    cout<<abs(3-a)+abs(3-b)<<endl;
    return 0;
}