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
    vector<string> v(n);
    vector<string> ans;
    unordered_map<string,int> mp;
    for(auto &it : v)
        cin >> it;
    
    reverse(v.begin(), v.end());
    for(auto x : v)
        if(!mp[x])
        {
            mp[x]++;
            ans.push_back(x);
        }
//    cout << " ANS --->" << endl;
    for(auto &it : ans)
        cout << it << endl;
    
}

int32_t main ()
{
    fast();
    int t = 1;
//     cin >> t;
    while(t--)
        solve();
    return 0;
}
