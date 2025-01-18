/**
 *    Author:  Asif_Zaman
 *    Created: Saturday, 18.01.2025 01:28 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it : v)
        cin >> it;
    map<int,int>cnt;
    for(int i = 0; i < n; i++){
        // map<int,int> cnt;
        int num = v[i];
        for(int j = 2; j * j <= num; j++){
            if(num % j == 0){
                while(num % j == 0){
                    cnt[j]++;
                    num /= j;
                }
            }
        }
        if(num>1){
            cnt[num]++;
        }
        // for(auto [x,y] : cnt){
        //     cout << x << " -> " << y << "\n";
        // }
        // cout << "\n";
    }
    bool ok = true;
    for(auto [x,y] : cnt){
        if(y % n != 0) ok = false; 
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--)
        solve();

    return 0;
}