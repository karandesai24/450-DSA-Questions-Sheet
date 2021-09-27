class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();

    for (int i = 0;i < size;i++) {

        int n = abs(nums[i]) - 1;
        nums[n] = -nums[n];
        if (nums[n] > 0) return n + 1;

    }
    return 0;
        
    }
};