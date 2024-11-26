#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define int long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(x) cerr << #x << " = " << x << endl;
#define loop(i, a, b) for (int i = a; i < b; ++i)
#define rloop(i, a, b) for (int i = a; i > b; --i)

using namespace std;

void ASIF()
{
    int n;
    cin>>n;
    vector<int>v(n);
    loop(i,0,n){
        cin>>v[i];
    }
    loop(i,0,256){
        int XOR=0;
        loop(j,0,n){
            XOR^=(v[j]^i);
        }
        if(XOR==0){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
