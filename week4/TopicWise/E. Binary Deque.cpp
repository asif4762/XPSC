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
    vector<int>v(n);
    ll s=0;
    for(auto&it:v){
        cin>>it;
        s+=it;
    }
    if(s<k){
        mnso;
        return;
    }
    ll l=0,r=0,sum=0,ans=0;
    while(r<n){
        sum+=v[r];
        if(sum==k){
            ans=max(ans,r-l+1);
        }
        else{
            while(l<=r&&sum>k){
                sum-=v[l];
                l++;
            }
            if(sum==k){
                ans=max(ans,r-l+1);
            }
        }
        r++;
    }
    cout<<v.size()-ans<<endl;
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
