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
    string s1,s2;
    cin >> s1 >> s2;
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(s1[i] == 'R')
            if(s2[i] != 'R')
                flag = false;
        
        if(s1[i] == 'G')
            if(s2[i] == 'R')
                flag = false;
        
        if(s1[i] == 'B')
            if(s2[i] == 'R')
                flag = false;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
