#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void ASIF()
{
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &it : v)
        cin >> it;
    
    v.erase(remove(v.begin(),v.end(),x),v.end());
    
    for(auto &it : v)
        cout << it << " ";
    
    cout << endl;
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
