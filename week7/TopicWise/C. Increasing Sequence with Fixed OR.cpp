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
	ll n;
	cin >> n;
	deque<ll> ans;
    for(ll i = 0; i <= __lg(n); i++){
    	if((n>>i)&1){
    		if(n - (1LL << i) > 0){
    			ans.push_front(n-(1LL << i));
    		}
    	}
    }
    ans.push_back(n);
    cout << ans.size() << endl;
    for(auto val : ans){
    	cout << val << " ";
    }
    cout << endl;
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