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
#define mns1 cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF()
{
    int n, tc, q;
    cin >> n >> tc >> q;
    vector<int> v(tc);
    for(auto &it : v)
        cin >> it;
    sort(v.begin(),v.end());
    while(q--)
    {
        int d;
        cin >> d;
        if(d < v[0])
            cout << v[0] - 1 << endl;
        else if(d > v[tc-1])
            cout << n - v[tc-1] << endl;
        else
        {
            auto it = lower_bound(v.begin(),v.end(),d);
            auto it_2 = it--;
            int l = *it;
            int r = *it_2;
            int mid = (l + r) / 2;
            cout << min(abs(mid - l),abs(mid - r)) << endl;
        }
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
