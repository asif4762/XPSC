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
    int x;
    cin >> x;
    if(x % 10 == 0)
    {
        cout << 100 - x << endl;
        return;
    }
    int d = x % 10;
    int tmp = 10 - d;
    // cout << d << endl;
    // cout << x << endl;
    x = tmp + x;
    cout << 100 - x  << endl;
}

int32_t main ()
{
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}