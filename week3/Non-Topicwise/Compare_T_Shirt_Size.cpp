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
    string s1, s2;
    cin >> s1 >> s2;
    char s1_b = s1.back();
    s1.pop_back();
    char s2_b = s2.back();
    s2.pop_back();
    if(s1_b == s2_b)
    {
        if(s1.size() == s2.size())
        {
            cout << "=" << endl;
            return;
        }
        if(s1_b == 'S')
        {
            if(s1.size() > s2.size())
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if(s1.size() > s2.size())
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
    }
    else if(s1_b == 'S')
    {
        if(s2_b == 'M' || s2_b == 'L')
            cout << "<" << endl;
    }
    else if(s1_b == 'M')
    {
        if(s2_b == 'S')
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }
    else if(s1_b == 'L')
        cout << ">" << endl;
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
