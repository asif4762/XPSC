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
    string s;
    cin >> s;
    sort(all(s));
    map<char,int>mp;
    for(char c : s)
        mp[c]++;
    
    for(char c = 'a'; c <= 'z'; c++)
    {
        if(!mp[c])
        {
            cout << c;
            return;
        }
    }
    cout << "None" << endl;
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