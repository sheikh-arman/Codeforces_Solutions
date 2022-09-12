#include<bits/stdc++.h>
using namespace std;
long long int ar[300000],ar2[300010],ar3[300010];
int main (){
    long long int n,k=0,ans=0;
    long long int s=0,ss=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=ar[i];
        ar2[i]=s;
    }
    for(int j=n-1;j>=0;j--){
            ss+=ar[j];
        ar3[k++]=ss;
    }
    int i=0,j=0;
    while(ar2[i]<=(s/2)&&ar3[j]<=(s/2)){
        if(ar2[i]==ar3[j]){
            
                ans=max(ans,ar2[i]);
            
            i++;
            j++;
        }
        if(ar2[i]<ar3[j])
            i++;
        else if(ar2[i]>ar3[j])
            j++;
    }
    cout<<ans<<endl;

}