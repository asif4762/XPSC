/**
 *    Author:  Asif_Zaman
 *    Created: Sunday, 19.01.2025 12:58 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << n / 2 << "\n";
        for(int i = 0; i < n/2; i++){
            cout << 2 << " ";
        }
        cout << "\n";
    }
    else{
        n -= 3;
        cout << (n / 2) + 1 << "\n";
        for(int i = 0; i < (n/2); i++){
            cout << 2 << " ";
        }
        cout << 3 << "\n";
    }
    
    return 0;
}