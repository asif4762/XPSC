#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            cout << s + to_string(mp[s]) << endl;
            mp[s+to_string(mp[s])] = 1;
            mp[s]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
