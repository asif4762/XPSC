/**
 *    Author:  Asif_Zaman
 *    Created: Thursday, 23.01.2025 12:35 AM (GMT+5:30)
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    set<string>s;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    string left = "", right = "", mid = "";
    while(!s.empty()){
        string cur = *s.begin();
        s.erase(cur);
        string tmp = cur;
        reverse(tmp.begin(),tmp.end());
        if(cur==tmp and mid.empty()){
            mid = cur;
        }
        else if(s.find(tmp)!=s.end()){
            left += cur;
            right = tmp + right;
            s.erase(tmp);
        }
    }

    cout << left.size() + mid.size() + right.size() << "\n";

    string final = left + mid + right;

    cout << final << "\n";
    
    return 0;
}