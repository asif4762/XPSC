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
#define mnso cout << -1 << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    vector<int>pref(n+1);
    pref[0] = 0;
    for(int i=1;i<=n;i++){
            cin>>v[i];
            pref[i]=pref[i-1]+v[i];
    }
    string s;
    cin>>s;
    s=" "+s;
    ll l=1,r=n,ans=0;
    while(l<r){
        if(s[l]=='L'&&s[r]=='R'){
            ans+=pref[r]-pref[l-1];
            l++;
            r--;
       }
       else if(s[l]=='R'){
        l++;
       }
       else if(s[r]=='L'){
        r--;
       }
    }
    cout<<ans<<endl;

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
