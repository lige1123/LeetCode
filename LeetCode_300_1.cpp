class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        vector<int> v;
        v.push_back(nums[0]);
        for (int i = 0; i < n; i++) {
            if (nums[i] > v.back()) {
                v.push_back(nums[i]);
            } else {
                *lower_bound(v.begin(), v.end(), nums[i]) = nums[i];
            }
        }
        return v.size();
    }
};
