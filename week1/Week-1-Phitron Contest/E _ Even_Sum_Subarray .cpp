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
    vector<int>v(n);
    int total = 0;
    for(int i = 0; i < n ;i++)
    {
        cin >> v[i];
        total += v[i];
    }
    int k = n - 1;
    for(int i = 0; i < n; i++)
    {
        if(total % 2 == 0)
        {
            cout << k + 1 << endl;
            return;
        }
            total -= v[k--];
    }
    cout << 0 << endl;
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

