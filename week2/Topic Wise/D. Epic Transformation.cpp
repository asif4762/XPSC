#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
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
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for(auto &x : mp)
        pq.push(x.second);
        
    while(!pq.empty())
    {
        if(pq.size() < 2)
            break;
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        a--;
        b--;
        if(a != 0)
            pq.push(a);
        if(b != 0)
            pq.push(b);
    }
    int ans = 0;
    while(!pq.empty())
    {
        ans += pq.top();
        pq.pop();
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
