#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll k, n;
        cin >> k >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll l = 0, r = n, ans = 0;

        auto ok = [&](ll x) {
            ll cat_pos = 0; 
            for (ll i = 0; i < x; i++) {
                if (cat_pos >= v[i]) {
                    return false;
                } 
                cat_pos += (k - v[i]); 
            }
            return true;
        };
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if (ok(mid)) {
                ans = mid;  
                l = mid + 1; 
            }
             else {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
