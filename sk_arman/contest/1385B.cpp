#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
    int test;
cin>>test;
while(test--){
  int n,ar[55];
 
cin>>n;
for(int i=0;i<=n;i++){
 
ar[i]=0;
}
for(int i=0;i<n*2;i++){
int a;cin>>a;
if(ar[a]==0){
cout<<a<<" ";ar[a]=1;
}
 
}
cout<<endl;
}
	return 0;
}