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
    ll n;
    cin >> n;
    ll arr[n];
    ll pre_fix[n];
    ll smOdd = 10e9+5;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0) smOdd = min(smOdd,arr[i]);
        if(i == 0)
            pre_fix[i] = arr[i];
        else
            pre_fix[i] = pre_fix[i-1] + arr[i];
    }
    if(pre_fix[n-1] % 2 == 0)
    {
        cout << pre_fix[n-1] << endl;
    }
    else cout <<  pre_fix[n-1] - smOdd << endl;
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