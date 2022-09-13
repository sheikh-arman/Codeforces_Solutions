#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int ar[]={6,8,4,2};
    scanf("%d",&n);
    if(n==0){
        printf("1\n");return 0;
    }
    printf("%d\n",ar[n%4]);
    return 0;
}