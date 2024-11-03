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

void ASIF()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    for(char c : s)
        mp[c]++;
    int oddCount = 0;
    for(auto &it : mp)
    {
        if(it.second % 2 != 0)
            oddCount++;
    }
    oddCount -= k;
    if(oddCount > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
     cin >> t;
    while(t--)
        ASIF();
    return 0;
}
