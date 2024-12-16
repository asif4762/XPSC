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
    int n, Zlatan = 0, Ramos = 0;
    cin >> n;
    string s;
    cin >> s;
    stack<char>st;
    for(char c : s){
    	if(!st.empty() && st.top() != c){
    		if(Zlatan <= Ramos){
    			Zlatan++;
    		}
    		else{
    			Ramos++;
    		}
    		st.pop();
    	}
    	else{
    		st.push(c);
    	}
    }
    if(Zlatan > Ramos){
    	cout << "Zlatan" << endl;
    }
    else{
    	cout << "Ramos" << endl;
    }
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
