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
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &it : v){
        cin >> it;
    }
    int cnt = 0;
    for(int i = n - 2; i >= 0; i--){
        while(v[i] >= v[i+1] && v[i]>0){
            v[i] = v[i]/2;
            cnt++;
        }
        if(v[i]>=v[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << cnt << endl;
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
