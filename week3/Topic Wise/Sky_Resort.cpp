#include<bits/stdc++.h>
// #define B begin()
// #define E end()
#define ll long long
// #define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<ll,ll>
using namespace std;

void ASIF()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > q) a[i] = 0;
        else a[i] = 1;
    }
    ll r = 0, ans = 0, cnt = 0;
    while(r < n)
    {
        if(a[r] == 1){
            cnt++;
        }
        else{
            if(cnt >= k){
                ll m = (cnt - k + 1);
                ans += (m*(m+1))/2;
            }
            cnt = 0;
        }
        r++;
    }
    if(cnt >= k){
        ll m = (cnt - k + 1);
        ans += (m*(m+1))/2;
    }
    cout << ans << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    cin >> t;
    while(t--)
        ASIF();
    return 0;
}
