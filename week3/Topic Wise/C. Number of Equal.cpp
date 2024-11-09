#include<bits/stdc++.h>
// #define B begin()
// #define E end()
#define ll long long
// #define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;

void ASIF()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    for(auto &it : A)
        cin >> it;
    for(auto &it : B)
        cin >> it;
    int l = 0;
    int r = 0;
    ll ans = 0;
    while(l < n && r < m)
    {
        int cur = A[l], cnt1 = 0,  cnt2 = 0;
        while(l < n && A[l] == cur)
        {
            l++;
            cnt1++;
        }
        while(r < m && cur > B[r])
            r++;
        while(r < m && cur == B[r])
        {
            r++;
            cnt2++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        ASIF();
    return 0;
}
