/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    ll n,s;
    cin>>n>>s;
    if(n==1&&s==0){
        cout<<"0 0";return 0;
    }
    
    if(s>0&&n*9>=s){
        ll tm=s-1;
        vector<ll>V(n);
        for(ll i=n-1;i>0;i--){
            if(tm>=9){
                V[i]=9;tm-=9;
            }
            else{
                V[i]=tm;tm=0;
            }
        }
        V[0]=tm+1;
        for(ll i=0;i<n;i++)cout<<V[i];
        cout<<" ";
        V.clear();
        tm=s;
        for(ll i=0;i<n;i++){
            if(tm>=9){
                cout<<9;tm-=9;
            }
            else{
                cout<<tm;tm=0;
            }
        }
        cout<<"\n";
    }
    else{
        cout<<"-1 -1\n";
    }
    return 0;
 }