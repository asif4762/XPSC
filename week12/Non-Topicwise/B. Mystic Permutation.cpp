/**
 *    Author:  Asif_Zaman
 *    Created: Wednesday, 22.01.2025 10:00 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), v1(n);

    for(auto &it : v)
        cin >> it;

    if(n==1){
        cout << -1 << "\n";
        return;
    }

    v1 = v;
    sort(v1.begin(),v1.end());

    for(int i = 0; i < n-1; i++){
        if(v[i]==v1[i]){
            swap(v1[i],v1[i+1]);
        }
    }

    if(v[n-1]==v1[n-1]){
        swap(v1[n-1],v1[n-2]);
    }

    for(auto &it : v1){
        cout << it << " ";
    }

    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
