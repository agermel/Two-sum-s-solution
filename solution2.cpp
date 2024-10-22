class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> temp;
        temp = nums;
        int n = nums.size();
        int left = 0;
        int right = n-1;
        sort (nums.begin(),nums.end());
        while (right > left) {
            if (nums[right] + nums[left] > target) right--;
            else if (nums[right] + nums[left] < target) left++;
            else break;
        }
        int i = 0;
        for (;i < n;i++) {
            if (temp[i] == nums[right]) break;
        }
        int j = 0;
        for (;j < n;j++) {
            if (temp[j] == nums[left] && i != j) break;
        }
        ans = {i,j};
        return ans;
    }
};
