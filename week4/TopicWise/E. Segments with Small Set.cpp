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

void ASIF(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &it : v) {
        cin >> it;
    }
    map<ll,ll> mp;
    ll l = 0, ans = 0;

    ll r = 0;
    while (r < n) {
        mp[v[r]]++;
        if(mp.size()<=k){
            ans += (r - l + 1);
        }
        else{
            while(mp.size()>k){
                mp[v[l]]--;
                if(mp[v[l]]==0){
                    mp.erase(v[l]);
                }
                l++;
            }
            if(mp.size()<=k){
                ans+=(r-l+1);
            }
        }
        r++;
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
