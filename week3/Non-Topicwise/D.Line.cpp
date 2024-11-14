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
    int sum = 0;
    vector<int> ls;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
        {
            sum += i;
            ls.push_back(n-1-2*i);
        }
        else
        {
            sum += n - i - 1;
            ls.push_back(2*i-(n-1));
        }
    }
    sort(rall(ls));
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        if(ls[i] > 0)
            sum += ls[i];
        v[i] = sum;
    }
    for(auto &x : v)
        cout << x << " ";
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
