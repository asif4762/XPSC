#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
#define int long long
#define pii pair<ll, ll>
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define syes cout << "Yes" << endl
#define sno cout << "No" << endl
#define minus_one cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF()
{
    vector<vector<char>>v(8,vector<char>(8));
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < 8; i++){
        int tmp = 0;
        for(int j = 0; j < 8; j++){
            if(v[i][j]=='R'){
                tmp++;
            }
        }
        if(tmp == 8){
            cout << "R" << endl;
            return;
        }
    }
    cout << "B" << endl;
}

int32_t main()
{
    fastForwardRead();
    int t = 1;
    cin >> t;
    while (t--)
        ASIF();
    return 0;
}