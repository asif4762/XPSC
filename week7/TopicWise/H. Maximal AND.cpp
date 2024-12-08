#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
#define int long long
#define pii pair<ll, ll>
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define syes cout << "Yes" << endl
#define sno cout << "No" << endl
#define minus_one cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

const int b = 30;

void ASIF()
{
    ll n, K;
    cin >> n >> K;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> bits(b + 1);
    for(int i = 0; i < n; i++){
        for(int k = b; k >= 0; k--){
            if((a[i] >> k) & 1){
                bits[k]++;
            }
        }
    }
    ll ans = 0;
    for(int k = b; k >= 0; k--){
        if(bits[k]==n){
            ans+=(1LL << k);
        }
        else{
            int need = n - bits[k];
            if(K >= need){
                ans += (1LL << k);
                K -= need;
            }
        }
    }
    cout << ans << endl;
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
