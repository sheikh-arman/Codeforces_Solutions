#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pfn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<int> :: iterator it1,it2;
vector<pair<ll,ll> >vp;
priority_queue<pair<ll,ll> >pq;
ll arr[2000100],arr2[2000100];
int main()
{
    ll n,k,ans=0,cnt=0,a,k1;
    sffl(n,k);
    k1=k;
    for(int i=0; i<n; i++)
    {
        sfl(a);//v.pb(a);
        arr[a]++;
        arr2[a]=1;
        if(a>cnt)
            cnt=a;
    }
    for(int i=1; i<=cnt; i++)
    {
        if(arr[i]>0)
            pq.push({arr[i],i});
    }
//    vst(vp);
//    reverse(vp.begin(),vp.end());
//        int siz=vp.size();
//        for(int i=siz;i>=0;i--){
//            if(vp[i].first==0)
//                vp.pop();
//            else
//                break;
//        }
//        for(int i=0;i<=cnt;i++){
//            printf("%lld %lld\n",vp[i].first,vp[i].second);
//        }

    // cout<<st.size()<<endl;

//     while(!pq.empty())
//        {
//            //ll x;
//            pair<ll,ll>tmp=pq.top();pq.pop();
//            cout<<tmp.first<<" "<<tmp.second<<endl;
//        }
        while(k--)
        {
            //ll x;
            pair<ll,ll>tmp=pq.top();
            pq.pop();//cout<<tmp.first<<" "<<tmp.second<<endl;
            v2.pb(tmp.second);
            arr2[tmp.second]++;
            tmp.first=arr[tmp.second]/arr2[tmp.second];
            pq.push(tmp);
        }
    //cout<<v2.size()<<endl;
    for(int i=0; i<k1; i++)
    {
        printf("%lld ",v2[i]);
    }
    printf("\n");
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}