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
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(mp[s] == 0)
        {
            cout << "NO" << endl;
            mp[s]++;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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
