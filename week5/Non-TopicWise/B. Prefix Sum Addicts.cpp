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

void ASIF(){
        int n,k;            
        cin>>n>>k;
        vector<ll> s(n+1,0),a(n+1);
        for(int i=n-k+1;i<=n;i++){
            cin>>s[i];
        }
        if(n==1 || k==1){
            cout<<"Yes"<<endl;
            return;
        }
        for(int i=n;i>=n-k+2;i--){
            a[i]=(s[i]-s[i-1]);
        }
        for(int i=n-k+2;i<=n;i++){
            if(i+1<=n && a[i+1]<a[i]){
                sno;
                return;
            }
        }
        for(int i=n-k+1;i>1;i--){
            a[i]=a[i+1];
            s[i-1]=s[i]-a[i];
        }
        a[1]=s[1];
 
        for(int i=1;i<=n;i++){
            if(i+1<=n && a[i+1]<a[i]){
                sno;
                return;
            }
        }
        syes;
}



int32_t main()
{
    fastForwardRead();
    ll t = 1;
    cin >> t;
    while (t--)
        ASIF();
    return 0;
}