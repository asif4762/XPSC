#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
inline ll mod_exp(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
inline ll mod_inv(ll a, ll m = MOD) { return mod_exp(a, m - 2, m); }
inline bool is_prime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &it : a) cin >> it;
    sort(all(a));

    auto ok = [&](ll md) {
        ll cnt = 0;
        for (ll i = (n / 2); i < n; i++) {
            cnt += (a[i] < md ? md - a[i] : 0);
        }
        return cnt <= k;
    };

    ll l = 1, r = 2e9, ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    fast_io();

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) {
        ASIF();
    }

    return 0;
}