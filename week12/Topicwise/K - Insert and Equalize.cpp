/**
 *    Author:  Asif_Zaman
 *    Created: Monday, 20.01.2025 03:03 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    set<ll> values; 
    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        values.insert(a[i]);
        mx = max(mx, a[i]);
    }

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    ll x = 0;
    for (int i = 1; i < n; i++) {
        x = gcd(x, abs(a[i] - a[i - 1]));
    }
    ll k = -1;
    while (values.count(mx + k * x)) {
        k--;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (mx - a[i]) / x;
    }
    ans -= k;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
