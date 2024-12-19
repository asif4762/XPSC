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
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans_1 = 0;
    int cnt_1 = 0;
    // vector<int> ans;
    for(int i = 0; i < n; i++){
        if(v[i]==0){
            ans_1 += cnt_1;
        }
        if(v[i]==1){
            ans_1+=0;
            cnt_1++;
        }
    }
    int idx_0 = -1,idx_1 = -1;
    for(int i = 0; i < n; i++){
        if(v[i]==0){
            idx_0 = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(v[i]==1){
            idx_1 = i;
            break;
        }
    }
    // cout << idx_0 << " " << idx_1 << endl;
    if(idx_0 != -1){
        int ans = 0, tmp_1 = 0;
        v[idx_0] = 1;
        for(int i = 0; i < n; i++){
        if(v[i]==0){
            ans += tmp_1;
        }
        if(v[i]==1){
            ans+=0;
            tmp_1++;
        }
    }
    ans_1 = max(ans_1,ans);
    v[idx_0] = 0;
    }
    if(idx_1 != -1){
        int ans = 0, tmp_1 = 0;
        v[idx_1] = 0;
        for(int i = 0; i < n; i++){
        if(v[i]==0){
            ans += tmp_1;
        }
        if(v[i]==1){
            ans+=0;
            tmp_1++;
        }
        }
        ans_1 = max(ans_1,ans);
    }
    cout << ans_1 << endl;
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
