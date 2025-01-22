/**
 *    Author:  Asif_Zaman
 *    Created: Wednesday, 22.01.2025 11:04 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() > s2.size()){
        cout << "NO\n";
        return;
    }
    map<char,int> ms1, ms2;
    for(auto c : s1){
        ms1[c]++;
    }
    for(int i = 0; i < s1.size(); i++){
        ms2[s2[i]]++;
    }
    bool ok = false;
    if(ms2==ms1){
        cout << "YES\n";
        return;
    }
    for(int i = s1.size(); i < s2.size(); i++){
        ms2[s2[i-s1.size()]]--;
        if(ms2[s2[i-s1.size()]] == 0){
            ms2.erase(s2[i-s1.size()]);
        }
        ms2[s2[i]]++;
        if(ms2==ms1){
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
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