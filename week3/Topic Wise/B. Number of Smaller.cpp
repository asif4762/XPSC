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
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    vector<int> ans;
    for(auto &it : A)
        cin >> it;
    for(auto &it : B)
        cin >> it;
    int l = 0;
    int r = 0;
    int cnt = 0;
    while(r < m)
    {
        if(l < n &&  A[l] < B[r])
        {
            l++;
            // r++;
            cnt++;
        }
        else
        {
            ans.push_back(cnt);
            r++;
        }
    }
    for(auto &it : ans)
        cout << it << " ";
    cout << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        ASIF();
    return 0;
}
