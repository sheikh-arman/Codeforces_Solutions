
#include <bits/stdc++.h>
#define int                   long long int
#define clr(a, v)             memset(a, v, sizeof a)
#define all(v)                v.begin(), v.end()
#define ast(v)                sort(v.begin(),v.end())
#define dst(v)                sort(v.begin(),v.end(), greater <int> ())
#define fast ios_base::       sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ass(cur, v)           cur.assign(v.begin(), v.end())
#define rep(i, l, r)          for (int i = l; i < r; i++)
#define rep2(i, l, r)         for (int i = l-1; i >= r; i--)
#define sfs(s)                scanf("%s", s)
#define sf(n)                 scanf("%lld", &n)
#define sff(n, m)             scanf("%lld %lld",&n,&m)
#define sfff(n, m, o)         scanf("%lld %lld %lld",&n,&m,&o)
#define PP(n, m)              cout << n << " " << m << "\n"
#define PPP(a, b, c)          cout<<a<<" "<<b<<" "<<c<<"\n"
#define mxe(a,n)              *max_element(all(a))
#define mne(a,n)              *min_element(all(a))
#define SUM(a)                accumulate(all(a),0)
#define I(n)                  cin >> n
#define II(n, m)              cin >> n >> m
#define III(a, b, c)          cin >> a >> b >> c
#define MIN(a, b, c)          min(a, min(b, c))
#define MAX(a, b, c)          max(a, max(b, c))
#define mid(b, e)             (b+e)/2
#define left(node)            node*2
#define right(node)           node*2+1
#define CAS(a)                cout << "Case " << a << ":"
#define pf(n)                 printf("%lld", n)
#define pff(n,m)              printf("%lld %lld\n",n,m)
#define prln(n)               printf("%lld\n", n)
#define P(n)                  cout << n
#define debug                 cout << " debug\n"
#define yes                   cout << "YES\n"
#define no                    cout << "NO\n"
#define sp                    cout << " "
#define nl                    cout << "\n"
#define ub                    upper_bound
#define lb                    lower_bound
#define pii                   pair<int,int>
#define vecI                  vector<int>
#define vecS                  vector<string>
#define vecC                  vector<char>
#define mp                    make_pair
#define pb                    push_back
#define S                     second
#define F                     first

using namespace std;
const int N = 2e5+5;
const int mod = 1e9+7;
bool is_prime[N+50];

//Template end
//-------------------******Alhamdulillah******--------------------//

int32_t main(){
        int a, b; II(a, b);
        if(a == 9 and b == 1){
            PP(9, 10);
        }
        else if(a>b or abs(a-b) > 1){
            P(-1); nl;
        }
        else if(a==b){
            a = a*10+1;
            b = b*10+2;
            PP(a,b);
        }
        else{
            a = a*10+9;
            b = b*10;
            PP(a,b);
        }
    return 0;

}

//--------------------******Alhamdulillah******-------------------//