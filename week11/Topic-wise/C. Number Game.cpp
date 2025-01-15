#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    auto ok = [&](int k){
        multiset<int>ml(v.begin(),v.end());
        for(int i = 0; i < k; i++){
            if(ml.empty()){
                return false;
            }
            int target = k - i;
            auto it = ml.upper_bound(target);
            if(ml.begin()==it){
                return false;
            }
            it--;
            ml.erase(it);
            if(ml.empty()){
                return true;
            }
            int small = *ml.begin() + target;
            ml.erase(ml.begin());
            ml.insert(small);
        }
        return true;
    };

    int l = 0, r = n, ans, mid;
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}