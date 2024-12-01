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
    vector<int>even,odd;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    sort(all(even));
    sort(all(odd));
    if(even.size()==0||odd.size()==0){
        cout<<0<<endl;
    }
    else{
        int tmp=odd.back();
        int ans=0;
        for(int i=0;i<even.size();i++){
            if(even[i]>tmp){
                cout<<even.size()+1<<endl;
                return;
            }
            else{
                ans++;
                tmp+=even[i];
            }
        }
        cout<<ans<<endl;
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
