#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n = arr.size();
        int l=0,r=0,sum=arr[0],ans=0;
        while(r<n){
            while(l<=r&&sum>k){
                sum-=arr[l];
                l++;
            }
            if(sum==k){
                ans=max(ans,r-l+1);
            }
            r++;
            if(r<n){
                sum+=arr[r];
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); 
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); 

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}