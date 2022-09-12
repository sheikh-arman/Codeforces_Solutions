#include<bits/stdc++.h>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pfn(n) printf("%d\n",n)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main(){
    ll n,n4;
    sfl(n);
    ll arr[n+5];
    ll  j, mx=-1,ind=-1;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if(mx<arr[i]){
            mx=arr[i];
            ind=i;
        }
    }
    for(ll i=ind-1,j=ind+1;;){
        if(i>=0&&(arr[i]+1)==mx){
            mx=arr[i];
            i--;
            continue;
        }else if(j<n&&(arr[j]+1)==mx){
            mx=arr[j];
            j++;
        }else if(i<0&&j>=n){
            break;
        }else{
            no;
            return 0;
        }
    }
    yes;
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}