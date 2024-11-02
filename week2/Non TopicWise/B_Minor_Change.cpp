#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void ASIF()
{
    string a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i]) cnt++;
    
    cout << cnt << endl;
}

int32_t main() {
    fast();
    int t = 1;
//    cin >> t;
    while (t--) {
        ASIF();
    }
    return 0;
}
