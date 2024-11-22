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
#define mnso cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll sum=0;
    if(a<=b){
        sum+=a;
    }
    else{
        sum+=b;
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x+1<=a){
            sum+=x;
        }
        else{
            sum+=a-1;
        }
    }
    cout<<sum<<endl;
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
