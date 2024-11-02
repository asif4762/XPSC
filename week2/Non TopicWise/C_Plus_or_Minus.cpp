#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void ASIF()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a + b) == c) cout << '+' << endl;
    else cout << '-' << endl;
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    while (t--) {
        ASIF();
    }
    return 0;
}
