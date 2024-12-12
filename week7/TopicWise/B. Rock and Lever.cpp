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
    ll n,ans=0;
    cin >> n;
    vector<ll>v(n);
    vector<bool>vis(n,false);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int mask = 31; mask >= 0; mask--){
        ll num = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i] && ((1LL << mask)&v[i])){
                num++;
            }
        }
        for(int i = 0; i < n; i++){
            if(!vis[i]&&((1LL << mask)&v[i])){
                vis[i] = true;
            }
        }
        ans += ((num*(num-1)) / 2);
    }
    cout << ans << endl;
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
