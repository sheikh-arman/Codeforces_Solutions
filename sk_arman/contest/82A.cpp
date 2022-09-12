#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,ml=5,s,cnt,sum=0,j;
    cin>>n;
    for(int i=1;;i++){
        if((sum+ml)<n){
            sum+=ml;ml*=2;
        }
        else
            break;
    }
    s=n-sum;
    cnt=ml/5;
    sum=0;
    for(j=1;;j++){
        if(sum+cnt<s)
            sum+=cnt;
        else
            break;
    }
    if(j==1)
    cout<<"Sheldon"<<endl;
    else if(j==2)
        cout<<"Leonard"<<endl;
    else if(j==3)
        cout<<"Penny"<<endl;
    else if(j==4)
        cout<<"Rajesh"<<endl;
    else if(j==5)
        cout<<"Howard"<<endl;
    }