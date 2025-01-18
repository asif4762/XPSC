/**
 *    Author:  Asif_Zaman
 *    Created: Saturday, 18.01.2025 11:20 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve(){
    int n;
    cin >> n;

    map<int,vector<int>>mp;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 11; j++){
            if(a[i]%allPrimes[j]==0){
                mp[allPrimes[j]].push_back(i);    
                break;        
            }
        }
    }
    vector<int> ans(n);
    int color = 1;
    for(auto [x,y] : mp){
        for(auto z : y)
            ans[z] = color;
        color++;
    }
    cout << mp.size() << endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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