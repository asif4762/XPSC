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
#define mns1 cout << -1 << endl
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
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<int> v(n);
    if(s[n-1] == 'g')
        v[n-1] = n-1;
    else
        v[n-1] = -1;
    for(int i = n-2; i >= 0; --i)
    {
        if(s[i] == 'g')
            v[i] = i;
        else
            v[i] = v[i + 1];
    }
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == c)
        {
            if(v[i] == -1)
                total = max(total,n - i + v[0]);
            else
                total = max(total,v[i] - i);
        }
            
    }
    cout << total << endl;
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
