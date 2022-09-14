#include<bits/stdc++.h>
using namespace std;
int ar[100010];
int ar2[100010];
int main(){
    int n,a,q,cnt=0,m=-1;
    vector<int>v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>m)
            m=a;
        //v.push_back(a);
        ar2[a]++;
    }
    //sort(v.begin(),v.end());
    for(int i=0;i<=m;i++){
        if(ar2[i]){
            cnt+=ar2[i];
        }
        ar[i]=cnt;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&a);
        if(a>=m){
            printf("%d\n",n);
        }
        else
        printf("%d\n",ar[a]);
    }
}