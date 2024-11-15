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
    vector<int> arr_1(n), arr_2(m);
    for(auto &it : arr_1)
        cin >> it;
    for(auto &it : arr_2)
        cin >> it;
    int l = 0;
    int r = 0;
    vector<int> ans;
    while(l < n && r < m)
    {
        if(arr_1[l] < arr_2[r])
            ans.push_back(arr_1[l++]);
        else
            ans.push_back(arr_2[r++]);
    }
    while(l < n)
    {
        ans.push_back(arr_1[l++]);
    }
    while(r < m)
    {
        ans.push_back(arr_2[r++]);
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
