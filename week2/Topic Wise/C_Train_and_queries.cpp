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
//    pair<string,int> students[n];
//    for(int i = 0; i < n; i++)
//        cin >> students[i].first >> students[i].second;
//    
//    for(auto [x,y] : students)
//        cout << x << " " << y << endl;
//    
//    tuple<string,int,string> t[n];
//    for(int i = 0; i < n; i++)
//        cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);
//    
//    for(auto [x,y,z] : t)
//        cout << x << " " << y << " " << z << endl;
    pair<string,pair<int,string > > p = {"dablu",{7,"01312"}};
    
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    
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
