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
    ll n, q;
    cin >> n >> q;
    vector<ll>a(n),x;
    vector<bool>pres(31,false);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        int tmp;
        cin >> tmp;
        if(!pres[tmp]){
            pres[tmp] = true;
            x.push_back(tmp);
        }
    }
    for(int i = 0; i < n; i++){
        for(auto &it : x){
            if(a[i]%(1LL << it) == 0){
                a[i] += (1LL << (it - 1));
            }
        }
    }
    // cout << "size -> " << x.size() << endl;
    for(auto &it : a){
        cout << it << " ";
    }
    cout << endl;
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
