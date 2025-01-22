#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*
               █████╗     ███████╗    ██╗    ███████╗
              ██╔══██╗    ██╔════╝    ██║    ██╔════╝
              ███████║    ███████╗    ██║    █████╗  
              ██╔══██║    ╚════██║    ██║    ██╔══╝  
              ██║  ██║    ███████║    ██║    ██║     
              ╚═╝  ╚═╝    ╚══════╝    ╚═╝    ╚═╝     
*/
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define B begin()
#define E end()
#define ll long long
#define int long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(x) cerr << #x << " = " << x << endl;

int modExp(int base, int exp, int m = mod) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return res;
}

int gcd(int a, int b) {
    while (b) b ^= a ^= b ^= a %= b;
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

vector<int> sieve(int n) {
    vector<int> primes, is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.pb(i);
            for (int j = i * i; j <= n; j += i) is_prime[j] = 0;
        }
    }
    return primes;
}

void ASIF() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n > m){
        cout << "NO" << endl;
        return;
    }
    sort(rall(v));
    bool check = true;
    int pos = v[0] + 1, tmp = v[0];
    for(int i = 1; i < n; i++){
        pos += tmp + 1;
        tmp = v[i];
        if(pos > m){
            check = false;
            break;
        }
    }
    
    cout << (check ? "YES\n" : "NO\n");
}

int32_t main()
{
    fastForwardRead();
    int t = 1;
    cin >> t;

    while (t--) 
        ASIF();
    
    return 0;
}