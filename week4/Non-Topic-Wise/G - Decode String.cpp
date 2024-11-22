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
    string s,ans="";
    cin>>s;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            char a = s[i-2];
            char b = s[i-1];
            string x = "";
            x+=a;
            x+=b;
            ans+=(char)('a'+stoi(x)-1);
            i-=2;
        }
        else{
            ans+=(char)('a'+(s[i]-'0')-1);
        }
    }
    
    // cout << << endl;
    reverse(all(ans));
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
