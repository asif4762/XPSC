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
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(is_sorted(all(v))){
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(abs((i+1)-v[i])%k!=0){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << 0 << endl;
    }
    else if(cnt == 2){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }
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