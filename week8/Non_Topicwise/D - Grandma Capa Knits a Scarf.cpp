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
    string s;
    cin >> s;
    set<char> st;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }
    for (auto ch : st) {
        int i = 0, j = n - 1;
        int cnt = 0;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } 
            else {
                if (s[i] == ch) {
                    i++;
                    cnt++;
                } 
                else if (s[j] == ch) {
                    j--;
                    cnt++;
                } 
                else {
                    cnt = -1;
                    break;
                }
            }
        }
        mp[ch] = cnt;
    }
    int ans = INT_MAX;
    for (auto [x, y] : mp) {
        if (y != -1) {
            ans = min(ans, y);
        }
    }
    if (ans == INT_MAX) {
        cout << -1 << endl;
    } 
    else {
        cout << ans << endl;
    }
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
