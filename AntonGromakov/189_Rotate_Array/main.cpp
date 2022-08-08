class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(&nums[0], &nums[nums.size()]);
        reverse(&nums[k], &nums[nums.size()]);
        reverse(&nums[0], &nums[k]);
    }
};
