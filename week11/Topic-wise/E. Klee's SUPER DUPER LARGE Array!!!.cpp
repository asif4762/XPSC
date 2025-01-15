#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

ll sum_of(ll a, ll n) {
    return n * ((2 * a) + (n - 1)) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll n, k;
        cin >> n >> k;

        ll l = 0, r = n, ans = LLONG_MAX, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            ll x = sum_of(k, mid);
            ll y = sum_of(k + mid, n - mid);
            ans = min(ans, abs(x - y));
            if (y >= x) {
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
