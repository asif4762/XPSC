/**
 *    Author:  Asif_Zaman
 *    Created: Monday, 20.01.2025 12:30 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        int num = v[i];
        for(int j = 2; j * j <= num; j++){
            if(num % j == 0){
                while(num % j == 0){
                    num /= j;
                }
                mp[j]++;
            }
        }
        if(num > 1){
            mp[num]++;
        }
    }

    int mx = 1;
    for(auto [x,y] : mp){
        mx = max(mx,y);
    }
    cout << mx << "\n";
    return 0;
}