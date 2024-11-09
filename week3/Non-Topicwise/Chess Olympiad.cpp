#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    double x, y, z;
    cin >> x >> y >> z;
    y = y * 0.5;
    z = z * 1;
    if((4 - y - z) > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
