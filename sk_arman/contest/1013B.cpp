#include<bits/stdc++.h>
using namespace std;
int ar[100010],ar2[100010];;
int main (){
    int ans=-1;
    int n,And;
    cin>>n>>And;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(ar[a])
            ans=0;
        if(ans){
            if(ar[a&And]||ar2[a])
                ans=1;
        }
        if(ans&&ans!=1)
            if(ar2[a&And])
                ans=2;
        ar[a]=ar2[a&And]=1;
    }
    cout<<ans<<endl;
}