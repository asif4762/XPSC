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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int win = 0;
    for(int i = 0; i < n; i++)
    {
        v[i] = pow(2, i + 1);
    }
    int diff = x;
    while(diff--)
    {
        win += v.back();
        v.pop_back();
    }
    int loss = 0;
    for(int i = 0; i < n - x; i++)
    {
        loss += v[i];
    }
    cout << win - loss << endl;
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