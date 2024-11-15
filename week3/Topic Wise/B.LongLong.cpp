#include<bits/stdc++.h>
// #define B begin()
// #define E end()
#define ll long long
// #define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;

void ASIF()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &it : v)
        cin >> it;
    ll sum = 0, op = 0;
    bool flag = false;
    for(ll i = 0; i < n; i++)
    {
            sum += abs(v[i]);
        if(flag){
            if(v[i] > 0){
                op++;
                flag = false;
            }
        }
        else{
            if(v[i] < 0)
                flag = true;
        }
    }
    if(flag)
        op++;
    cout << sum << " " << op << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    cin >> t;
    while(t--)
        ASIF();
    return 0;
}
