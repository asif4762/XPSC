#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
#define int long long
#define pii pair<ll, ll>
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define syes cout << "Yes" << endl
#define sno cout << "No" << endl
#define minus_one cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF()
{
    ll n, m;
    cin >> n >> m;
    ll l = max(n-m,0LL);
    ll r = n+m;
    ll tmp=0;
    for(int mask = 31; mask >= 0; mask--){
        int x,y;
        if((1<<mask)&l){
            x=1;
        }
        else{
            x=0;
        }
        if((1<<mask)&r){
            y=1;
        }
        else{
            y=0;
        }
        if(x^y){
            tmp = (1 << mask);
            tmp |= tmp-1;
            break;
        }
    }
    cout << (l | tmp) << endl;
}

int32_t main()
{
    fastForwardRead();
    int t = 1;
    cin >> t;
    while (t--)
        ASIF();
    return 0;
}
