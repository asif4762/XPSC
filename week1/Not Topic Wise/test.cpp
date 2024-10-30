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
    vector<int> v(n);
    int k = 0;
    bool no1 = false;
    bool no2 = false;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
        {
            k++;
        }
        else if(v[i] % 2 == 1 && i < n - 1)
        {
            no1 = true;
            if(v[i + 1] % 2 != 0)
            {
                no2 = true;
                if(no1 && no2)
                {
                    k++;
                }
                no2 = false;
            }
            else
            {
                k--;
            }
        }
    }
    cout << k << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}