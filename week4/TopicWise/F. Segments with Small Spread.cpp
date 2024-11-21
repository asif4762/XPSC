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

void ASIF(){
    ll n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto&it:v){
        cin>>it;
    }
    multiset<ll>ml;
    int l=0,r=0,ans=0;
    while(r<n){
        ml.insert(v[r]);
        int mx=*ml.rbegin();
        int mn=*ml.begin();
        if((mx-mn)<=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                mx=*ml.rbegin();
                mn=*ml.begin();
                if(mx-mn<=k){
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            if((mx-mn)<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fastForwardRead();
    int t = 1;
    // cin >> t;
    while (t--)
        ASIF();
    return 0;
}
