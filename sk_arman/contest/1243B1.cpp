#include <bits/stdc++.h>
#define int                   long long int
#define all(v)                v.begin(), v.end()
#define dst(v)                sort(v.begin(),v.end(), greater <int> ())
#define fast ios_base::       sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i, l, r)          for (int i = l; i < r; i++)
#define rep2(i, l, r)         for (int i = l-1; i >= r; i--)
#define ass(cur, v)           cur.assign(v.begin(), v.end())
#define sfs(s)                scanf("%s", s)
#define sf(n)                 scanf("%lld", &n)
#define sff(n, m)             scanf("%lld %lld",&n,&m)
#define sfff(n, m, o)         scanf("%lld %lld %lld",&n,&m,&o)
#define PP(n, m)              cout << n << " " << m << "\n"
#define PPP(a, b, c)          cout<<a<<" "<<b<<" "<<c<<"\n"
#define mxe(a)                *max_element(all(a))
#define mne(a)                *min_element(all(a))
#define SUM(a)                accumulate(all(a),0)
#define I(n)                  cin >> n
#define II(n, m)              cin >> n >> m
#define III(a, b, c)          cin >> a >> b >> c
#define MIN(a, b, c)          min(a, min(b, c))
#define MAX(a, b, c)          max(a, max(b, c))
#define MID(b, e)             (b+(e-b))/2
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
int32_t main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fast;
    int tc = 1, cas = 0; I(tc);
    while(tc--){
        int n; I(n);
        string a,b; II(a,b);
        int flag = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                char x = a[i], y = b[i];
                for(int j = i+1; j < n; j++){
                    if(a[j] != b[j]){
                        swap(a[i], b[j]);
                        if(a == b){
                            flag = 1; break;
                        }
                        else swap(a[i], b[j]);

                        swap(b[i], a[j]);
                        if(a == b){
                            flag = 1; break;
                        }
                        else swap(b[i], a[j]);
                        cnt = 1;
                        break;
                    }
                }
            }
            if(flag or cnt) break;
        }
        if(flag) yes;
        else no;
    }
    return 0;

}

//--------------------******Alhamdulillah******-------------------//