#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, diff = -1, zero_diff = -1;
        cin >> n;
        bool ok = true;
        vector<int>a(n), b(n);
        for(auto &it : a) cin >> it;
        for(auto &it : b) cin >> it;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                ok = false;
                break;
            }
            if(b[i]!=0){
                int d = a[i] - b[i];
                if(diff == -1) diff = d;
                else if(diff != d){
                    ok = false;
                    break;
                }
            }
            else{
                if(diff!=-1&&(a[i] - b[i])>diff){
                    ok = false;
                    break;
                }
                else{
                    zero_diff = max(zero_diff,a[i]-b[i]);
                }
            }
        }
        if(diff != -1 && zero_diff > diff){
            ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}