#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x < y){
        cout << "CSK" << endl;
        return 0;
    }
    if(x >= (y+18))
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;
}
