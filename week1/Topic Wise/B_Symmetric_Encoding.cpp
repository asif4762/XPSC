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
    string s;
    cin >> s;
    string r = s;
    sort(r.begin(),r.end());
    r.erase(unique(r.begin(), r.end()),r.end());
    map<char,char> mp;
    for(int i = 0, j = r.size() - 1; i <= j; i++, j--)
    {
        mp[r[i]] = r[j];
        mp[r[j]] = r[i];
    }
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = mp[s[i]];
    }
    cout << s << endl;
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
