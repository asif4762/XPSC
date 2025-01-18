/**
 *    Author:  Asif_Zaman
 *    Created: Saturday, 18.01.2025 02:35 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

bool is_prime(ll n){
    if(n == 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

bool is_prefect_sqrt(ll n){
    ll x = sqrtl(n);
    return (x * x == n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(is_prefect_sqrt(x) and is_prime(sqrtl(x)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}