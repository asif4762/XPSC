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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    int maxsum = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            if (sum % 2 == 0) maxsum = max(maxsum, j - i + 1);
        }
    }
    cout << maxsum << endl;
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

