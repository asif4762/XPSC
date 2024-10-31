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

void Asif()
{
    int n;
    cin >> n;
    map<string,string> ans,has;
    for(int i = 0; i < n; i++)
    {
        string a,b;
        cin >> a >> b;
        
        if(has.find(a) != has.end())
        {
            string tmp = has[a];
            ans[tmp] = b;
            has.erase(a);
            has[b] = tmp;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }
    for(auto val : ans)
        cout << val.first << " " << val.second << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        Asif();
    return 0;
}