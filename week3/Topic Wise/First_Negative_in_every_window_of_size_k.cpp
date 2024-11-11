class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        queue<int> q;
        int l = 0;
        int r = 0;
        while(r < arr.size())
        {
            if(arr[r] < 0)
                q.push(arr[r]);
            if(r - l + 1 == k)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front());
                    if(q.front() == arr[l])
                        q.pop();
                }
                else
                    ans.push_back(0);
                l++,r++;
            }
            else
                r++;
        }
        return ans;
    }
};