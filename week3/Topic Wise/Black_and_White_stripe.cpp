#include <bits/stdc++.h>
#define ll long long
#define fastForwardRead()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void ASIF(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0;
    int r = 0;
    int cnt = 0;
    int ans_cnt = INT_MAX;
    while(r < n)
    {
        if(s[r] == 'W')
            cnt++;
        if(r - l + 1 == k)
        {
            ans_cnt = min(ans_cnt,cnt);
            if(s[l] == 'W')
                cnt--;
            r++;
            l++;
        }
        else
            r++;
    }
    cout << ans_cnt << endl;
}

int main() {
    fastForwardRead();
    ll t = 1;
    cin >> t;
    while (t--) {
        ASIF();
    }
    return 0;
}
