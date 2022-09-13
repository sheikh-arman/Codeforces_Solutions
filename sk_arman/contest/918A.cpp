#include<bits/stdc++.h>
using namespace std;
int fib[1004];
void f(){
    fib[1]=1;
    int a=1,b=0,sum;
    for(int i=1;sum<1004;i++){
        sum=a+b;
        b=a;
        a=sum;
        fib[sum]=1;
    }
}
int main ()
{
    f();
    int n;
    scanf("%d",&n);
       for(int i=1;i<=n;i++)
            if(fib[i]!=0)
            cout<<"O";
       else
        cout<<"o";
       cout<<endl;
    return 0;
}