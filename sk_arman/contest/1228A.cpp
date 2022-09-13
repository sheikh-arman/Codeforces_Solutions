#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int l,r;
cin>>l>>r;
for(int i=l;i<=r;i++){
   int n=i,cnt=0;
set<int>s;
while(n){
  s.insert(n%10);
   cnt++;
   n/=10;
}
if(s.size()==cnt){
 
printf("%d\n",i);return 0;
 
}
}
 
printf("-1\n");return 0;
}