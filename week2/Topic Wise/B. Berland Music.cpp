#include <bits/stdc++.h>
#define B begin()
#define E end()
#define rB rbegin()
#define rE rend()
#define ll long long
#define all(x) x.B, x.E
#define rall(x) x.rB, x.rE
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
    int n;
    cin >> n;
    vector<int> ans(n);
    vector<int> v(n);
    vector<int> liked;
    vector<int> disliked;
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans[i] = v[i];
        mp[ans[i]] = i;
    }
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
            disliked.push_back(v[i]);
        else if(s[i] == '1')
            liked.push_back(v[i]);
    }
    sort(rall(v));
    sort(rall(liked));
    sort(rall(disliked));
    for(int i = 0; i < liked.size(); i++)
        ans[mp[liked[i]]] = v[i];
    for(int i = liked.size(), j = 0; j < disliked.size(); i++, j++)
        ans[mp[disliked[j]]] = v[i];
    
    for(auto it : ans)
        cout << it << " ";
    cout << endl;
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
