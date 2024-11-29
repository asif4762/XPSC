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
    int n,m,s=0;
    cin>>n>>m;
    vector<int>ans(n);
    if(n>m){
        sno;
        return;
    }
    else if(n%2==0&&m%2==0){
        syes;
        for(int i=0;i<n-2;i++){
            ans[i]=1;
            s++;
        }
        ans[n-2]=(m-s)/2;
        ans[n-1]=ans[n-2];
    }
    else if(n%2==1&&m%2==1){
        syes;
        for(int i=0;i<n-1;i++){
            ans[i]=1;
            s++;
        }
        ans[n-1]=m-s;
    }
    else if(n%2==0&&m%2==1){
        sno;
        return;
    }
    else if(n%2==1&&m%2==0){
        syes;
        for(int i=0;i<n-1;i++){
            ans[i]=1;
            s++;
        }
        ans[n-1]=m-s;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
