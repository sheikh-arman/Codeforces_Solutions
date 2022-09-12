#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,w,h,t,Max,ck=0;
    cin>>n;
    cin>>w>>h;
    Max=max(w,h);
    for(int i=0;i<n-1;i++){
        cin>>w>>h;
        if(w<=Max&&h<=Max){
            int a;
            a=max(w,h);
            Max=a;
        }
        else if(w<=Max)
            Max=w;
        else if(h<=Max)
            Max=h;
        else
            ck=1;

    }
    cout<<(ck==1?"NO":"YES")<<endl;
    return 0;
}