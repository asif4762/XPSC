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
    string s;
    cin >> s;
    vi N,S,E,W;
    for(int i = 0; i < n; i++){
        if(s[i]=='N') N.pb(i);
        if(s[i]=='S') S.pb(i);
        if(s[i]=='E') E.pb(i);
        if(s[i]=='W') W.pb(i);
    }
    vector<char>vc(n,'-');
    int i = 0;
    for(; i < min(N.size(),S.size()); i++){
        if(i%2==0){
            vc[N[i]] = 'R';
            vc[S[i]] = 'R';
        }
        else{
            vc[N[i]] = 'H';
            vc[S[i]] = 'H';
        }
    }
    for(;i < max(N.size(),S.size()); i+=2){
            if(i<N.size()){
                if(i+1==N.size()){
                    no();
                    return;
                }
                vc[N[i]] = 'R';
                vc[N[i+1]] = 'H';
            }
            else if(i<S.size()){
                if(i+1==S.size()){
                    no();
                    return;
                }
                vc[S[i]] = 'R';
                vc[S[i+1]] = 'H';
            }
        }
        i = 0;
    for(; i < min(E.size(),W.size()); i++){
        if(i%2==0){
            vc[E[i]]='H';
            vc[W[i]]='H';
        }
        else{
            vc[E[i]]='R';
            vc[W[i]]='R';
        }
    }
    for(;i<max(E.size(),W.size());i+=2){
            if(i<E.size()){
                if(i+1==E.size()){
                    no();
                    return;
                }
                vc[E[i]]='R';
                vc[E[i+1]]='H';
            }
            else if(i<W.size()){
                if(i+1==W.size()){
                    no();
                    return;
                }
                vc[W[i]]='R';
                vc[W[i+1]]='H';
            }
        }
    int cnt_r = 0, cnt_h = 0;
    for(auto ch : vc){
        if(ch=='R') cnt_r++;
        if(ch=='H') cnt_h++;
    }
    if(cnt_h == 0 || cnt_r == 0){
        no();
        return;
    }
    for(auto ch : vc){
        cout << ch;
    }
    cout << endl;

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
