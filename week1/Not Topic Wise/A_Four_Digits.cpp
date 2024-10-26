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
    string n;
    cin >> n;
    if(n.size() == 4) cout << n << endl;
    else if(n.size() == 3) cout << "0" << n << endl;
    else if(n.size() == 2) cout << "00" << n << endl;
    else if(n.size() == 1) cout << "000" << n << endl;
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