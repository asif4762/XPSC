/**
 *    Author:  Asif_Zaman
 *    Created: Tuesday, 21.01.2025 11:22 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;
        while(__gcd(a,b) > 1){
            b /= __gcd(a,b);
        }
        if(b > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
    return 0;
}