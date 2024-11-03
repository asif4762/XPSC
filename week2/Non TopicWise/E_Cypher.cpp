#include<bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;

void ASIF()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        int sz;
        string s;
        cin >> sz >> s;
        for(int j = 0; j < sz; j++)
        {
            if(s[j] == 'D')
            {
                v[i] = (v[i] + 1) % 10;
            }
            else if(s[j] == 'U')
            {
                v[i] = (v[i] - 1 + 10) % 10;
            }
        }
        ans.push_back(v[i]);
    }
    for(auto &it : ans)
        cout << it << " ";
    cout <<endl;
}

int32_t main ()
{
    fast();
    int t = 1;
     cin >> t;
    while(t--)
        ASIF();
    return 0;
}
