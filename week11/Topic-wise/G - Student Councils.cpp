#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

int main(){
    ll k, n;
    cin >> k >> n;
    vector<ll> v(n);
    for(auto &it : v){
        cin >> it;
    }
    auto ok = [&](ll mid){
        ll target = k * mid;
        for(auto it : v){
            target -= min(it,mid);
        }
        return target <= 0;
    };
    ll l = 0, r = 1e12, ans, mid;
    while(l<=r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << "\n";
}