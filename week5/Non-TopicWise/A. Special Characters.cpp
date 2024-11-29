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
    cin>>n;
    if(n%2==1){
        no;
        return;
    }
    else{
        cout<<"YES"<<endl;
        char a='A';
        char b='A';
        string s="";
        for(int i=0;i<n/2;i++){
            s+=a;
            s+=b;
            if(a=='Z'){
                a='A';
            }
            if(b=='Z'){
                b='A';
            }
            a++;
            b++;
        }
        cout<<s<<endl;
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
