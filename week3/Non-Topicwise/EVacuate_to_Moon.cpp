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
    ll N, M, H;
    cin >> N >> M >> H;
    vector<ll> cap(N);
    vector<ll> out(M);
    for(auto &it : cap)
        cin >> it;
    for(auto &it : out)
        cin >> it;
    sort(rall(cap));
    sort(rall(out));
    ll ans = 0;
    for(int i = 0; i < min(N,M); i++)
        ans += min(cap[i], H * out[i]);
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
