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
    string s;
    cin >> s;
    int cnt_1 = 0, cnt_0 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='1'){
            cnt_1++;
        }
        else{
            cnt_0++;
        }
    }
    string t;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(cnt_1 > 0 && s[i] == '0'){
            t.push_back('1');
            cnt_1--;
        }
        else if(cnt_0 > 0 && s[i] == '1'){
            t.push_back('0');
            cnt_0--;
        }
        else{
            break;
        }
    }
    cout << cnt_0 + cnt_1 << endl;
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
