#include<bits/stdc++.h>
using namespace std;
int main (){
    int tcase,n,ans=0,a[1001];
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        cin>>a[i];
    }
    for(int i=1;i<tcase-1;i++){
        if((a[i]>a[i+1]&&a[i]>a[i-1])||(a[i]<a[i+1]&&a[i]<a[i-1]))
                ans++;

    }
    cout<<ans<<endl;
}