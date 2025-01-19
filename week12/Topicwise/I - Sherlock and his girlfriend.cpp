/**
 *    Author:  Asif_Zaman
 *    Created: Monday, 20.01.2025 02:20 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<bool>prime(N+5,true);

void seive(){
    prime[0]=false;
    prime[1]=false;
    for(int i = 2; i * i<= N; i++){
        if(prime[i]){
            for(int j = i * i; j <= N; j += i){
                prime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int n;
    cin >> n;
    if(n == 1 || n == 2)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
    for(int i = 2; i <= n + 1; i++){
        if(prime[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    cout << "\n";
    return 0;
}