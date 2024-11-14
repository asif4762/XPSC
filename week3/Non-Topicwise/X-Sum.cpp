#include <bits/stdc++.h>
#define ll long long
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF(){
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ll tmp_sum = 0;
            tmp_sum += v[i][j];
            ll tmp_i = i - 1, tmp_j = j - 1;
            while (tmp_i >= 0 && tmp_j >= 0) {
                tmp_sum += v[tmp_i--][tmp_j--];
            }
            tmp_i = i - 1, tmp_j = j + 1;
            while (tmp_i >= 0 && tmp_j < m) {
                tmp_sum += v[tmp_i--][tmp_j++];
            }
            tmp_i = i + 1, tmp_j = j - 1;
            while (tmp_i < n && tmp_j >= 0) {
                tmp_sum += v[tmp_i++][tmp_j--];
            }
            tmp_i = i + 1, tmp_j = j + 1;
            while (tmp_i < n && tmp_j < m) {
                tmp_sum += v[tmp_i++][tmp_j++];
            }
            sum = max(sum, tmp_sum);
        }
    }
    cout << sum << endl;
}

int main() {
    fastForwardRead();
    ll t = 1;
    cin >> t;
    while (t--) {
        ASIF();
    }
    return 0;
}
