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
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<0<<endl;
        return;
    }
    if(x==0){
        int tmp=(y+1)/2;
        cout<<tmp<<endl;
        return;
    }
    if(y==0){
        if(x<=15){
            cout<<1<<endl;
        }
        else{
            cout<<1+(x-1)/15<<endl;
        }
        return;
    }
    else{
        int tmp=(y+1)/2;
        int total=15*tmp;
        int rem=total-(4*y);
        if(rem>=x){
            cout<<tmp<<endl;
        }
        else{
            int h=(x-rem+14)/15;
            tmp+=h;
            cout<<tmp<<endl;
        }
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
