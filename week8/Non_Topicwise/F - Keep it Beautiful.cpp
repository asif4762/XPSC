#include <bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B, x.E
#define rall(x) x.rbegin(), x.rend()
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
    string an = "";
    vector<int>v(n),ans;
    bool f = false;
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    }
    for(int i = 0; i < n; i++){
    	if(ans.empty()){
    		ans.push_back(v[i]);
    		an +="1";
    	}
    	else{
    		if(f){
    			if(ans.back()>v[i]){
    				an +="0";
    			}
    			else{
    				if(v[i]>ans[0]){
    					an += "0";
    				}
    				else{
    					an+="1";
    					ans.push_back(v[i]);
    				}
    			}
    		}
    		else{
    			if(ans.back() <= v[i]){
    				ans.push_back(v[i]);
    				an += "1";
    			}
    			else{
    				if(v[i]>ans[0]){
    					an+="0";
    				}
    				else{
    					f=true;
    					ans.push_back(v[i]);
    					an+="1";
    				}
    			}
    		}
    	}
    }
    cout << an << endl;
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
