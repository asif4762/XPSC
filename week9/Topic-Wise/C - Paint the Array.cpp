#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes() cout << "YES\n";
#define no() cout << "NO\n";
#define endl '\n'
#define mod 1000000007
#define deb(x) cerr << #x << " = " << x << endl;

const int INF = 1e18;
const int MOD = 1e9 + 7;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

inline int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
inline int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
inline int mod_exp(int a, int b, int m = MOD) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
inline int mod_inv(int a, int m = MOD) { return mod_exp(a, m - 2, m); }
inline bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void ASIF() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int g1 = 0;
    int g2 = 0;
    for(int i = 0; i < n; i+=2){
        g1 = __gcd(g1,v[i]);
    }
    for(int i = 1; i < n; i+=2){
        g2 = __gcd(g2,v[i]);
    }
    bool f = false;
    for(int i = 1; i < n; i+=2){
        if(v[i]%g1 == 0){
            f = true;
            break;
        }
    }
    if(!f){
        cout << g1 << endl;
        return;
    }
    f = false;
    for(int i = 0; i < n; i+=2){
        if(v[i]%g2==0){
            f = true;
        }
    }
    if(!f){
        cout << g2 << endl;
        return;
    }
    cout << 0 << endl;
}


int32_t main() {
    fast_io(); 

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t; 
    while (t--) {
        ASIF();
    }

    return 0;
}
