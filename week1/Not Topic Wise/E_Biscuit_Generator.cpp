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
    int a, b, t;
    cin >> a >> b >> t;
    int k = 2;
    int ans = 0;
    int p = a;
    while(p <= t)
    {
        ans += b;
        p = a * k;
        k++;
    }
    cout << ans << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}