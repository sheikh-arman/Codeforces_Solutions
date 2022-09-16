/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : dp
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 50010
ll ar[N+10];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    for(ll TEST=1; TEST<=tcase; TEST++)
    {

        string s;
        cin>>s;
        ll cnt=0;
        for(ll i=0;s[i]!='\0';i++){
            if(s[i]=='0'){
                cnt++;
            }
        }
        ll siz=s.size();
        if(cnt==siz||cnt==0){
            cout<<s<<"\n";continue;
        }
        char ch='a';
        for(ll i=0;i<siz;i++){
            if(s[i]!=ch){
                cout<<s[i];
                ch=s[i];
            }
            else{
                if(s[i]=='0'){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
                cout<<s[i];
                ch=s[i];
            }
        }
        cout<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
    return 0;
}