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
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int z=0,nz=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            nz++;
        }
        else{
            z++;
        }
    }
    if(z==0){
        cout<<0<<endl;
        return;
    }
    if(z-2<nz){
        cout<<0<<endl;
        return;
    }
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,v[i]);
    }
    if(mx==1){
        cout<<2<<endl;
        return;
    }
    cout<<1<<endl;
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
