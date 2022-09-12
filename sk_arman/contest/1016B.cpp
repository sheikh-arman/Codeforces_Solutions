#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
int ar[10000];
int main (){
    string s1,s2;
    int n,m,q,l2,ck;
    cin>>n>>m>>q;
    cin>>s1>>s2;
    for(int i=0;s1[i]!='\0';i++){
            ck=0;
        for(int j=0;s2[j]!='\0';j++){
            if(s2[j]!=s1[i+j])
                break;
            ck++;
            if(ck==m)
            {
                ar[i]=1;break;
            }
        }
    }
    for(int i=0;i<q;i++){
            int a,b,cnt=0;
        scanf("%d%d",&a,&b);
        for(int j=a-1;j<=b;j++){
            if(ar[j]&&j+m<=b)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}