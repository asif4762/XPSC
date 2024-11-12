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
    vector<string> s(n);
    vector<string> ans;
    for (auto &it : s)
        cin >> it;
    unordered_set<string> st;
    for (int i = n - 1; i >= 0; i--) 
        if (st.find(s[i]) == st.end()) 
        {
            ans.push_back(s[i]);
            st.insert(s[i]);
        }
    string tm = "";
    for (const auto &it : ans) 
        tm += it.substr(it.size() - 2); 

    cout << tm << endl;
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
