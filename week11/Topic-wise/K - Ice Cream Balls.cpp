#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        auto ok = [&](ll mid){
            return (mid * (mid - 1) / 2) <= n;
        };
        ll l = 1, r = 2e9;
        while (r - l > 1) {
            ll mid = l + (r - l) / 2;
            if (ok(mid)) {
                l = mid;
            } 
            else {
                r = mid;   
            }
        }
        ll tmp = l * (l - 1) / 2;
        ll sum = n - tmp;
        cout << l + sum << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
