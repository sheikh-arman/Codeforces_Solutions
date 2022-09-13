/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};
ll ar[200011];
ll tree[800100];
void build(ll n,ll b,ll e)
{
    if(b==e)
    {
        tree[n]=ar[b];
        return;
    }
    else
    {
        build(n*2,b,(b+e)/2);
        build(n*2+1,((b+e)/2)+1,e);
        tree[n]=max(tree[n*2],tree[n*2+1]);
    }

}
ll query(ll n,ll b,ll e,ll i,ll j)
{
    if(b>j||e<i)
    {
        return 0;
    }
    if(b>=i&&e<=j)
    {
        return tree[n];
    }
    return max(query(n*2,b,(b+e)/2,i,j),query(n*2+1,(b+e)/2+1,e,i,j));
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=m;i++){
            cin>>ar[i];
        }
        build(1,1,m);
        ll q;
        cin>>q;
        for(ll i=0;i<q;i++){
            ll stx,sty,enx,eny,k;
            cin>>stx>>sty>>enx>>eny>>k;
            ll dif=(n-stx);
            dif/=k;
            stx+=(dif*k);

            dif=(n-enx);
            dif/=k;
            enx+=(k*dif);

            if(sty>eny){
                swap(sty,eny);
            }

            ll ma=query(1,1,m,sty,eny);
            //cout<<ma<<" "<<stx<<" "<<enx<<" x\n";
            if(ma<stx&&stx==enx&&abs(sty-eny)%k==0){
                YES;
            }
            else{
                NO;
            }



//            swap(stx,sty);
//            swap(enx,eny);
//            ll dif=abs(n-sty)+1;
//            dif/=k;
//            sty-=(dif*k);
//            dif=abs(n-eny)+1;
//            dif/=k;
//            eny-=(dif*k);
//            if(stx>enx)swap(stx,enx);
//            ll ma=query(1,1,m,stx,enx);
//            cout<<ma<<" "<<sty<<" "<<eny<<" x\n";
//            ll ck_ma=eny;
//            if(ma<ck_ma&&eny==sty){
//                YES;
//            }
//            else{
//                NO;
//            }
        }
    }
    return 0;
}