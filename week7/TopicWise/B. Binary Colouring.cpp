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
    vector<int> ans;
    while(n){
        if(n%2==0){
            ans.push_back(0);
        }
        else{
            ans.push_back(1);
        }
        n /= 2;
    }
    ans.push_back(0);
    for(int i = 0; i < ans.size()-1; i++){
        if(ans[i]&&ans[i+1]){
            for(int j = i; j < ans.size(); j++){
                if(ans[j] == 0){
                    ans[j]=1;
                    ans[i]=-1;
                    break;
                }
                else{
                    ans[j]=0;
                }
            }
        }
    }
    if(ans[ans.size()-1] == 0){
        ans.pop_back();
    }
    cout << ans.size() << endl;
    for(auto &it : ans){
        cout << it << " ";
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
