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
    vector<vector<int>> v(n+1,vector<int>(n+1));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - 1; j++)
            cin >> v[i][j];
    }
    map<int,int> mp;
    map<int,int> m;
    for(int i = 1; i <= n; i++)
    {
        mp[v[i][n-1]] = i;
        m[v[i][n-1]]++;
    }
    int idx = 0, val;
    for(auto [x,y] : m)
    {
        if(y == 1) idx = mp[x];
        else val = x;
    }
    for(int i = 1; i <= n-1; i++)
    {
        cout << v[idx][i] << " ";
    }
    cout << val << endl;
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
