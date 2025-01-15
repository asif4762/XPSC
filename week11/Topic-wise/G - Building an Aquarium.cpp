#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(auto &it : v){
            cin >> it;
        }
        ll l = 0, r = 1e10, ans=-1;
        auto ok = [&](ll h){
            ll total = 0;
            for(int i = 0; i < n; i++){
                if(v[i]<=h){
                    total+=(h-v[i]);
                }
            }
            return x < total;
        };
        while(l<=r){
            ll mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans-1 << endl;
    }

    return 0;
}
