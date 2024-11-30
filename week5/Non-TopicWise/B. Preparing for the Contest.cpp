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
    int n,m;
    cin>>n>>m;
    if(m==0){
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(m==n-1){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=n-m;i<=n;i++){
        cout<<i<< " ";
    }
    for(int i=n-m-1;i>0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
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
