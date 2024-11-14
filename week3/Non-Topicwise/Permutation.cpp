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
    cin>>n;
    int mt[n+5][n];
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<n; j++)
             cin>>mt[i][j];
      }
      map < int , int>mp;
      map< int , int> m;
      for(int i=1; i<=n; i++)
      {
         mp[mt[i][n-1]] = i;
         m[mt[i][n-1]]++;
      }
      int idx =0, val;
      for(auto u:m) {
        if(u.second==1) idx = u.first;
        else val = u.first;
      }
       for(int i=1; i<n; i++)
          cout<<mt[mp[idx]][i]<<" ";
       cout<<val<<endl;
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
