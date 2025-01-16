#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

int main(){
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc, ri;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> ri;
    ll B = 0, S = 0, C = 0;
    for(auto &it : s){
        if(it=='B') B++;
        else if(it == 'S') S++;
        else C++;
    }
    auto ok = [&](ll mid){
        ll BB = max(0LL, B * mid - nb);
        ll SS = max(0LL, S * mid - ns);
        ll CC = max(0LL, C * mid - nc);
        ll total = BB * pb + SS * ps + CC * pc;
        return total <= ri;
    };
    ll l = 0, r = ri + 105, ans, mid;
    while(l<=r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
}