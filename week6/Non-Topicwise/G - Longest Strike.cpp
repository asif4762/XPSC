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
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        mp[p]++;
    }
    vector<int>v;
    for(const auto &it:mp){
        if(it.second>=k){
            v.push_back(it.first);
        }
    }
    if(v.empty()){
        minus_one;
        return;
    }
    sort(all(v));
    int l_idx=v[0],r_idx=v[0],mx=0,l=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]-1){
            if(v[i]-l>mx){
                l_idx=l;
                r_idx=v[i];
                mx=v[i]-l;
            }
        }
        else{
            l=v[i];
        }
    }
    cout<<l_idx<<" "<<r_idx<<endl;
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
