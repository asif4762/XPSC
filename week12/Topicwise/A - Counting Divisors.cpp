/**
 *    Author:  Asif_Zaman
 *    Created: Thursday, 16.01.2025 10:10 PM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i = 1; i < maxN; i++){
        for(int j = i; j < maxN; j+= i){
           divisors[j]++;
        }
    }

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << divisors[n] << endl;
    }

    return 0;
}