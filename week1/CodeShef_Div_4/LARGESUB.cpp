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
    string s;
    cin >> s;
    int cntA = 0, cntB = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'a' && s[i + 1] == 'b')
            cntA++;
        else if(s[i] == 'b' && s[i + 1] == 'a')
            cntB++;
    }
    if(cntA == cntB)
    {
        cout << n << endl;
    }
    else
    {
        int ans1 = n,ans2 = n;
        char fst = s[0], lst = s[n-1];
        for(int i = 0; i < n; i++)
        {
            if(s[i] != fst) break;
            ans1--;
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] != lst) break;
            ans2--;
        }
        cout << max(ans1,ans2) << endl;
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
