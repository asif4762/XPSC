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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> ans;
    map<ll,ll> cnt;
    for(ll i = 0; i < n; i++)
    {
        cnt[v[i]]++;
        if(cnt[v[i]] >= 2)
        {
            ll val = v[i];
            while(true)
            {
                if(cnt[val] < 2) break;
                ll total = cnt[val];
                cnt.erase(val);
                for(ll i = 1; i <= total/2; i++)
                {
                    cnt[2*val]++;
                }
                if(total % 2 != 0)
                {
                    cnt[val]++;
                }
                val *= 2;
            }
        }
        ans.push_back(cnt.size());
    }
    for(auto &x : ans)
        cout << x << " ";
    cout << endl;
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
