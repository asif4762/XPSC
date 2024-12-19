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
    ll n, k;
    cin >> n >> k;
    deque<ll>dq;
    ll sum_2 = ((n*(n+1))/2);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int tmp = k % (n + 1);
    ll sum_1 = accumulate(dq.begin(),dq.end(),0LL);
    for(int i = 0; i < tmp; i++){
        ll val = abs(sum_1-sum_2);
        sum_1 -= dq.back();
        dq.pop_back();
        dq.push_front(val);
        sum_1 += val;
    }
    for(auto &it : dq){
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
