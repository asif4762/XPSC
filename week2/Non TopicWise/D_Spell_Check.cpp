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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

void ASIF()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n != 5)
    {
        no;
        return;
    }
    else
    {
        string name = "Timur";
        sort(all(name));
        sort(all(s));
        if(name == s)
        {
            yes;
        }
        else
        {
            no;
        }
    }
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