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
    vector<int>a(n),r(33),ans;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int mask = 0; mask < 32; mask++){
        for(int i = 0; i < n; i++){
            if(a[i] & (1 << mask)){
                r[mask]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        bool f = 1;
        for(int mask = 0; mask < 32; mask++){
            if(r[mask]%i != 0){
                f = 0;
                break;
            }
        }
        if(f){
            ans.push_back(i);
        }
    }
    for(auto &it : ans){
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
