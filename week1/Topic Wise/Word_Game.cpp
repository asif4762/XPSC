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
    int n,N=3;
    cin >> n;
    vector<int> ans(N + 1);
    map<string,vector<int>> mp;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            string s;
            cin >> s;
            mp[s].push_back(i);
        }
    }
    for(auto [x,y] : mp)
    {
        vector<int> v = y;
        if(v.size() == 1)
        {
            ans[v[0]]+=3;
        }
        if(v.size() == 2)
        {
            ans[v[0]]++;
            ans[v[1]]++;
        }
//        cout << x << "-->";
//        for(auto val : y)
//            cout << val << " ";
//        
//        cout << endl;
    }
    for(int i = 1; i <= N; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main ()
{
    fast();
    int t;
     cin >> t;
    while(t--)
        solve();
    return 0;
}
