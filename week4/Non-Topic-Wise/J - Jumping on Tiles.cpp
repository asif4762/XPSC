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
    string s;
    cin>>s;
    int n=s.size();
    char st=s[0];
    char ed=s[n-1];
    int mx=max(st,ed),mn=min(st,ed);
    vector<pair<char,int>>v;
    for(int i=0;i<n;i++){
        if(s[i]>=mn&&s[i]<=mx){
            v.push_back({s[i],i+1});
        }
    }
    if(st<=ed){
        sort(all(v));
    }
    else{
        sort(rall(v));
    }
    vector<int>pth;
    pth.push_back(1);
    for(const auto&it:v){
        if(it.second!=1&&it.second!=n){
            pth.push_back(it.second);
        };
    }
    pth.push_back(n);
    int cst=0;
    for(int i=0;i<pth.size()-1;i++){
        cst+=abs(s[pth[i]-1]-s[pth[i+1]-1]);
    }
    cout<<cst<<" "<<pth.size()<<endl;
    for(auto&it:pth){
        cout<<it<<" ";
    }
    cout<<endl;
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
