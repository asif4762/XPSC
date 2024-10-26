#include<bits/stdc++.h>
#define B begin()
#define E end()
#define ll long long
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pii pair<int,int>
using namespace std;
int dp[1005][1005];
int knapSack(int n, int weight[], int value[], int w)
{
    if(n == 0 || w == 0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if(weight[n-1] <= w)
    {
        int op1 = knapSack(n-1,weight,value,w-weight[n-1]) + value[n-1];
        int op2 = knapSack(n-1,weight,value,w);
        return dp[n][w] = max(op1,op2);
    }
    else return dp[n][w] = knapSack(n-1,weight,value,w);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    int weight[n],value[n];
    for(int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    cout << knapSack(n,weight,value,w) << endl;
}

int32_t main ()
{
    fast();
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}