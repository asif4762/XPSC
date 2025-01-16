#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    auto ok = [&](int d) {
    int cowsPlaced = 1;
    int lastPos = stalls[0];
    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= d) {
            cowsPlaced++;
            lastPos = stalls[i];
            if (cowsPlaced == k) return true;
        }
    }
    return false;
    };
    int l = 0, r = stalls[n-1] - stalls[0], ans, mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";

    return 0;
}
