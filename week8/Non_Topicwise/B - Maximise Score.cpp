#include <bits/stdc++.h>
#define fastForwardRead() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void ASIF() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) {
        cin >> it;
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
    	int tmp = 0;
    	if(i + 1 < n){
    		tmp = max(tmp,abs(v[i]-v[i+1]));
    	}
    	if(i - 1 > -1){
    		tmp = max(tmp,abs(v[i]-v[i-1]));
    	}
    	ans = min(tmp,ans);
    }
    cout << ans << endl;
}

int32_t main() {
    fastForwardRead();
    int t;
    cin >> t;
    while (t--) {
        ASIF();
    }
    return 0;
}