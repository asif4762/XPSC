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
    deque<int>dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    for(int i=0;i<n;i++){
        if(is_sorted(dq.begin(),dq.end())){
            yes;
            return;
        }
        int x=dq.front();
        dq.pop_front();
        dq.push_back(x);
    }
    no;
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
