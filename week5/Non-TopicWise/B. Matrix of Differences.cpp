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
    vector<vector<int>>v(n+1,vector<int>(n+1));
    int p=1,q=n*n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=n;j++){
                if(j%2==1){
                    v[i][j]=p++;
                }
                else{
                    v[i][j]=q--;
                }
            }
        }
        else{
            for(int j=n;j>=1;j--){
                if(j%2==1){
                    v[i][j]=q--;
                }
                else{
                    v[i][j]=p++;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
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
