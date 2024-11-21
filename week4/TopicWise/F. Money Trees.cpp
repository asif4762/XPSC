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
    int n, k;
    cin>>n>>k;
    vector<int>f(n);
    vector<int>h(n);
    for(auto&it:f){
        cin>>it;
    }
    for(auto&it:h){
        cin>>it;
    }
    ll ans=0,l=0,r=0,mxL=0,sum=0;
    while(r<n){
        sum+=f[r];
        while(l<r&&(sum>k||h[r-1]%h[r]!=0)){
            sum-=f[l];
            l++;
        }
        if(sum<=k){
            mxL=max(mxL,r-l+1);
        }
        r++;
    }
    cout<<mxL<<endl;
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
