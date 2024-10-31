#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cap = 0;
    int sml = 0;
    vector<char> c;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == 'b')
        {
            sml++;
            continue;
        }
        if(s[i] == 'B')
        {
            cap++;
            continue;
        }
        if(isupper(s[i]) && cap > 0)
        {
            cap--;
            continue;
        }
        if(islower(s[i]) && sml > 0)
        {
            sml--;
            continue;
        }
        c.push_back(s[i]);
    }
    reverse(c.begin(), c.end());
    for(auto &x : c)
        cout << x;
    
    cout << endl;
}
int main()
{
    fast();
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
