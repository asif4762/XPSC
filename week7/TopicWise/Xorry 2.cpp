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
    int n;
    cin >> n;
    int a = 1, b = 0, cnt = 0;
    while(a*2<=n){
        a=a*2;
        cnt++;
    }
    int ans = 1;
    bool c = false;
    for(int i = cnt - 1; i >= 0; i--){
        if(n&1<<i){
            b = b | (1 << i);
            c = true;
        }
        else{
            if(c){
                ans = ans * 2;
            }
        }
    }
    cout << ans << endl;
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