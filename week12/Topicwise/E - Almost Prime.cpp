/**
 *    Author:  Asif_Zaman
 *    Created: Sunday, 19.01.2025 12:00 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

const int N = 3005;
vector<bool> prime(N,true);

void seive(){
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i <= N; i++){
        if(prime[i]){
            for(int j = i * i; j <= N; j += i){
                prime[j] = false;
            }
        }
    }
}

vector<int> prime_divisors(N,0);

void all_prime_divisors_cnt(){
    for(int i = 2; i <= N; i++){
        if(prime[i]){
            for(int j = i; j <= N; j += i){
                prime_divisors[j]++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    seive();
    all_prime_divisors_cnt();

    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i <= n; i++){
        if(prime_divisors[i]==2)
            cnt++;
    }
    
    cout << cnt << "\n";
    return 0;
}