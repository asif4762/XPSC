/**
 *    Author:  Asif_Zaman
 *    Created: Monday, 20.01.2025 01:52 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(!(x > n)){
            mp[x]++;
        }
    }
    map<int,int>res;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j+=i){
            res[j]+=mp[i];
        }
    }
    int mx = 0;
    for(auto [x,y] : res){
        mx = max(mx,y);
    }
    cout << mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}