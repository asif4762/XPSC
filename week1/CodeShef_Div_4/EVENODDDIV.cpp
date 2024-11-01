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
    int evenCnt = 0;
    int oddCnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
            {
                evenCnt++;
            }
            else
            {
                oddCnt++;
            }
        }
    }
    if(evenCnt > oddCnt) cout << 1 << endl;
    else if(evenCnt == oddCnt) cout << 0 << endl;
    else  cout << -1 << endl;
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
