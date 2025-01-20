#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 5;
vector<int> divisors[N];

void all_divisors() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }
}

void solve() {
    int a, b, l;
    cin >> a >> b >> l;
    set<int> ans;
    for (int d : divisors[l]) {
        int x = l / d;
        int power_a = 1;
        for (int i = 0; power_a <= x; ++i) {
            if (x % power_a != 0) 
                break;
            int rem = x / power_a;
            int power_b = 1;
            for (int j = 0; power_b <= rem; ++j) {
                if (power_b == rem) {
                    ans.insert(d);
                    break;
                }
                power_b *= b;
            }
            power_a *= a;
        }
    }
    cout << ans.size() << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    all_divisors();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
