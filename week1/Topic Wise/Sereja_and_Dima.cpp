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

void solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    int sreja = 0;
    int dima = 0;
    for(int i = 0; i < n; i++)
        cin >> dq[i];
    while(!dq.empty())
    {
        if(dq.front() > dq.back())
        {
            sreja += dq.front();
            dq.pop_front();
        }
        else
        {
            sreja += dq.back();
            dq.pop_back();
        }
        if(!dq.empty())
        {
            if(dq.front() > dq.back())
            {
                dima += dq.front();
                dq.pop_front();
            }
            else
            {
                dima += dq.back();
                dq.pop_back();
            }
        }
    }
    cout << sreja << " " << dima << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}
