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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int r = 0;
    int l = 0;
    int cnt = 0;
    while(r < n)
    {
        if(s[r] == 'B')
        {
            cnt++;
            r += k - 1;
            l += k - 1;
        }
        if(r - l + 1 == k)
        {
            l++;
            r++;
        }
        else
            r++;
    }
    cout << cnt << endl;
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
