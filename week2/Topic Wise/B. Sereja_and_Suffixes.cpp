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
    vector<int> ans(n + 1);
    set<int> s;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for(int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        ans[i] = s.size();
    }
    // sort(ans.rbegin(),ans.rend());
    while(m--)
    {
        int pos;
        cin >> pos;
//        pos--;
        cout << ans[pos] << endl;
    }
//    for(auto &it : s)
//        cout << it <<  " ";
    
//    for(auto &it : ans)
//        cout << it << endl;
//    
//    cout << endl;
}

int32_t main()
{
    fastForwardRead();
    int t = 1;
    // cin >> t;
    while (t--)
        ASIF();
    return 0;
}
