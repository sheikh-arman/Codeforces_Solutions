#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int arr[102];
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
     }
     cout<<endl;
}