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
    ll a = 0LL, b, c, d;
    cin >> b >> c >> d;
    for(int i = 0; i < 64; i++){
        ll tmpA = (1LL << i);
        ll tmpB,tmpC,tmpD;
        if(tmpA & b){
            tmpB = tmpA;
        }
        else{
            tmpB = 0LL;
        }
        if(tmpA & c){
            tmpC = tmpA;
        }
        else{
            tmpC = 0LL;
        }
        if(tmpA & d){
            tmpD = tmpA;
        }
        else{
            tmpD = 0LL;
        }
        if((tmpA | tmpB) - (tmpA & tmpC) == tmpD){
            a += tmpA;
        }
    }
    if((a|b) == (d + (a & c))){
        cout << a << endl;
    }
    else{
        cout << -1 << endl;
    }
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
