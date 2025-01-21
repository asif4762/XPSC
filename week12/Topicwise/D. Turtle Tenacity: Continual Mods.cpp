/**
 *    Author:  Asif_Zaman
 *    Created: Tuesday, 21.01.2025 10:24 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(auto &it : v)
        cin >> it;

    sort(v.begin(),v.end());
    auto it = find(v.begin()+1,v.end(),v[0]);
    bool f = false;
    if(it == v.end()){
        f = true;
    }
    bool ok = false;
    for(int i = 1; i < n; i++){
        if(v[i]%v[0]!=0){
            ok = true;
            break;
        }
    }

    if(f)
        cout << "YES\n";
    else if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();
}