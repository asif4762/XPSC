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
    int s,t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i <= s; i++)
        for(int j = 0 ; j <= s; j++)
            for(int k = 0; k <= s; k++)
                if((i + j + k <= s) && (i * j * k <= t)) cnt++;
    
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