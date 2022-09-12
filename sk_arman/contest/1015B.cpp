#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    vector<int>v;
    int n,cnt=0;
    cin>>n;
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    s3=s1;s4=s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3!=s4){
        cout<<-1<<endl;return 0;
    }
    for(int i=0;i<n;i++){
            int j;
            for(int k=i;k<n;k++){
                if(s2[i]==s1[k]){
                    j=k;
                break;
                }
            }
        if(i!=j){
            while(j>i){
                    cnt++;
                v.pb(j);
                char ch=s1[j];
                s1[j]=s1[j-1];
                s1[j-1]=ch;j--;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //cout<<s1;
}



///******************************  ALHAMDULILLAH  *****************************/