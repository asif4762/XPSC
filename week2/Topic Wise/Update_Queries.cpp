#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
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
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1;
    set<int> s;
    vector<int> v;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s.insert(x-1);
    }
    for(auto it : s)
        v.push_back(it);
    cin >> s2;
    sort(all(s2));
    for(int i = 0; i < v.size(); i++)
        s1[v[i]] = s2[i];
    cout << s1 << endl;
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
