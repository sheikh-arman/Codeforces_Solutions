#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
//#define vec(a) vector<int>a

int main (){
    int n,ar[1000];
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2,i,j,cnt=0;
    l1=s1.size();
    l2=s2.size();
    i=l1-1;j=l2-1;
    while(i>=0&&j>=0){
        if(s1[i]==s2[j]){
            i--;j--;cnt++;
        }
        else
            break;

    }
    cout<<((l1-cnt)+(l2-cnt))<<endl;
    return 0;
}