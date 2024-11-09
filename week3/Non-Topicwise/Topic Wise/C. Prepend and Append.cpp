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
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        if((s[i]=='0'&&s[j]=='1')||(s[j]=='0'&&s[i]=='1'))
            cnt++;
        else
            break;
    }
    cout << s.size() - (cnt * 2) << endl;
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
