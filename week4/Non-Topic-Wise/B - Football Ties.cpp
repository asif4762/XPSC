#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
    int x, y;
    cin >> x >> y;
    int tmp = min(x%3,y%3);
    cout << tmp<< endl;
    }
}
