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
    string s1,s2;
    cin >> s1 >> s2;
    int t1 = 0, t2 = 0, q = 0;
    for(char c : s1){
        if(c == '+'){
            t1+=1;
        }
        else{
            t1-=1;
        }
    }
    for(char c : s2){
        if(c == '+'){
            t2+=1;
        }
        else if(c == '?'){
            q+=1;
        }
        else{
            t2-=1;
        }
    }
    int diff = t1 - t2,cnt=0;
    if((diff + q) % 2 != 0 || abs(diff) > q) {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return;
    }
    for(int mask = 0; mask < (1 << q); mask++){
        int tmp = 0;
        for(int i = 0; i < q; i++){
            if(mask & (1 << i)){
                tmp++;
            }
            else{
                tmp--;
            }
        }
        if(tmp==diff){
            cnt++;
        }
    }
    double ans = double(cnt)/(1 << q);
    cout << fixed << setprecision(12) << ans << endl;
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
