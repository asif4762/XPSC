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
    int q, tr = 1;
    cin >> q;
    vector<int> res;
    set<pair<int,int>> s;
    multiset<pair<int,int>> muls;
    while(q--)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            int m;
            cin >> m;
            s.insert({tr,m});
            muls.insert({m,-tr});
            tr++;
        }
        else if(x == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            s.erase(s.begin());
            muls.erase({money,-pos});
            res.push_back(pos);
        }
        else
        {
            int pos = -muls.rbegin()->second;
            int money = muls.rbegin()->first;
            muls.erase(--muls.end());
            s.erase({pos,money});
            res.push_back(pos);
        }
    }
    for(auto &it : res)
        cout << it << " ";
}

int32_t main()
{
    fastForwardRead();
    int t = 1;
    // cin >> t;
    while (t--)
        ASIF();
    return 0;
}
