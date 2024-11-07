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
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int min = 1;
    int max = n;
    int l = 1;
    int r = n;
    while(l < r)
    {
        if(v[l] == min)
        {
            min++;
            l++;
        }
        else if(v[l] == max)
        {
            l++;
            max--;
        }
        else if(v[r] == min)
        {
            r--;
            min++;
        }
        else if(v[r] == max)
        {
            r--;
            max--;
        }
        else
        {
            cout << l << " " << r << endl;
            return;
        }
    }
    cout << -1 << endl;
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
