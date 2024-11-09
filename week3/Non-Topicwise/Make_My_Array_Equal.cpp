#include<bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &it : v)
        cin >> it;
    sort(all(v));
    if(n == 1)
        cout << "YES" << endl;
    else if(n == 2)
        {
            if((v[0] == 0) || (v[0] == v[1]))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    else
    {
        bool isPossible = true;
        for(int i = 0; i < n - 1; i++)
            if(!(v[i] == v[i + 1] || v[i] == 0))
            {
                isPossible = false;
                break;
            }
            if(isPossible)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
                
    }
}

int32_t main ()
{
    fast();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
