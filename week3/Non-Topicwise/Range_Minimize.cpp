#include<bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;

void solve()
{
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it : v)
            cin >> it;
        sort(all(v));
        int mn = min({v[n-2] - v[1], v[n-3] - v[0], v[n-1] - v[2]});
        cout << mn << endl;
    }
}

int32_t main ()
{
    fast();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
