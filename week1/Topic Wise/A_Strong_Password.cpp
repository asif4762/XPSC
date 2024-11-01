#include<bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char insertedChar = 'a';
    bool inserted = false;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            if(s[i] != 'z')
            {
                insertedChar = s[i] + 1;
            }
            else
            {
                insertedChar = s[i] - 1;
            }
            s.insert(s.begin() + i + 1,insertedChar);
            inserted = true;
            break;
        }
    }
    if(!inserted)
    {
        if(s.size() == 1)
        {
            if(s[0] != 'z')
            {
                insertedChar = s[0] + 1;
            }
            else
            {
                insertedChar = 'y';
            }
            s.insert(s.begin(),insertedChar);
        }
        else
        {
            if(s[0] == 'a')
            {
                insertedChar = 'b';
            }
            s = insertedChar + s;
        }
    }
    cout << s << endl;
}

int32_t main()
{
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
