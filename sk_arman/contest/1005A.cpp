#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
//#define vec(a) vector<int>a

int main (){
    int n,ar[1000];
    cin>>n;
    int cnt=1,a;
    cin>>ar[0];
    a=ar[0];
    for(int i=1;i<n;i++){
        cin>>ar[i];
        if(ar[i]<=a){
            cnt++;
        }
        a=ar[i];
    }
    cout<<cnt<<endl;
    for(int i=0;i<n-1;i++){
        if(ar[i]>=ar[i+1])
            cout<<ar[i]<<" ";
    }
    cout<<ar[n-1];

    return 0;
}