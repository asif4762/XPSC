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
    vector<int>a(n),b;
    for(auto &it : a){
        cin >> it;
    }
    if(a[n-1]==1){
        no;
        return;
    }
    for(int i = n - 1; i >= 0; i--){
        if(a[i]==0){
            if(i == 0 || a[i-1]==0){
                b.push_back(0);
            }
            else{
                int cnt = 0, j = i - 1;
                while(j >= 0 && a[j] == 1){
                    cnt++;
                    j--;
                }
                for(int k = 0; k < cnt; k++){
                    b.push_back(0);
                }
                b.push_back(cnt);
                i = j + 1;
            }
        }
    }
    yes;
    for(auto &it : b){
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
