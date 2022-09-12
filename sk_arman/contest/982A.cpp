#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,cnt=0;
    cin>>n>>s;
    if((n==1&&s[0]=='0')||(s[n-1]=='0'&&s[n-2]=='0')||(s[0]=='0'&&s[1]=='0')){
        printf("No\n");return 0;
    }
    for(int i=0;i<n;i++){
        if((s[i]=='1'&&s[i+1]=='1')||(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0')){
            printf("No\n");return 0;
        }
    }
    printf("Yes\n");
///*****************************  ALHAMDULILLAH  *****************************/
}