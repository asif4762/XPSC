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
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int maxcnt = 0;
    for(auto &it : mp)
    {
        maxcnt = max(maxcnt,it.second);
    }
    
    cout << maxcnt << endl;
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
