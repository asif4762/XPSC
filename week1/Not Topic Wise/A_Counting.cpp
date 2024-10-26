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
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    if(a > b)
    {
        for(int i = a; i <= b; i++) cnt++;
    }
    else for(int i = a; i <= b; i++) cnt++;
    cout << cnt << endl;

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