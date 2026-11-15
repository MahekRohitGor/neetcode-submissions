class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = k-1;
        vector<int> res;

        while(r != nums.size()){
            int maxNum = INT_MIN;
            for(int i = l; i<=r; i++){
                maxNum = max(maxNum, nums[i]);
            }
            res.push_back(maxNum);
            l++;
            r++;
        }

        return res;

    }
};
