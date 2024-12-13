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
    bool is_odd = false;
    if(n%2==1){
        is_odd = true;
    }
    string s;
    cin >> s;
    int not_equal=0,equal=0;
    for(int i = 0; i < n/2; i++){
        if(s[i]!=s[n-1-i]){
            not_equal++;
        }
        else{
            equal+=2;
        }
    }
    if(is_odd) equal++;
    string ans = "";
    for(int i = 0; i <= n; i++){
        int tmp = i - not_equal;
        if(i >= not_equal){
            if(tmp <= equal){
                if(tmp == equal){
                    ans += "1";
                }
                else{
                    if(tmp%2==0){
                        ans += "1";
                    }
                    else{
                        if(is_odd){
                            ans+="1";
                        }
                        else{
                            ans+="0";
                        }
                    }
                }
            }
            else{
                ans += "0";
            }
        }
        else{
            ans += "0";
        }
    }
    cout << ans << endl;
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
