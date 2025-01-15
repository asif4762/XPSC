#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve(){
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for(auto &it : a) cin >> it;
    for(auto &it : c) cin >> it;
    auto ok = [&](ll x){
        ll damage = 0;
        for(int i = 0; i < n; i++){
            damage += ceil((double)x / c[i]) * a[i];
            if (damage >= h) return true;
        }
        return false;
    };
    ll l = 1, r = 4e11, ans, mid;
    while(l<=r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}