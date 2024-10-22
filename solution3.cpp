class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int rest;
        unordered_map<int,int> mp;
        vector<int> ans;
        for (int i = 0;i < n;i++) {
            rest = target - nums[i];
            if (mp.count(rest)) {
                ans = {i,mp[rest]};
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
