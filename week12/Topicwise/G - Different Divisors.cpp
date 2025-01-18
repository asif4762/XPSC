/**
 *    Author:  Asif_Zaman
 *    Created: Sunday, 19.01.2025 02:28 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

const int MAXP = 2e5;
vector<int> primes;

void seive() {
    vector<bool> is_prime(MAXP, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXP; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXP; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAXP; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    seive();
    map<int, int> mp;
    for (int i = 1; i <= 1e4; i++) {
        auto it1 = lower_bound(primes.begin(), primes.end(), i + 1);
        int p1 = *it1;
        auto it2 = lower_bound(primes.begin(), primes.end(), p1 + i);
        int p2 = *it2;
        mp[i] = p1 * p2;
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << mp[n] << "\n";
    }

    return 0;
}
