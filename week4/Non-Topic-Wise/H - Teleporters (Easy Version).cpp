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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto&it:v){
        cin>>it;
    }
    for(int i=0;i<n;i++){
        v[i]=v[i]+i+1;
    }
    sort(all(v));
    ll cnt=0,sum=0;
    for(auto&it:v){
        sum+=it;
        if(k<sum){
            break;
        }
        cnt++;
    }
    cout<<cnt<<endl;
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