#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, s;
    cin>>n>>s;
    vector<ll>v(n);
    for(auto&it:v){
        cin>>it;
    }
    ll l=0,r=0,ans=0,sum=0;
    while(r<n){
        sum+=v[r];
        if(sum>=s){
            ans+=n-r;
            while(sum>=s){
                sum-=v[l];
                l++;
                if(sum>=s){
                    ans+=n-r;
                }
            }
        }
        r++;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}