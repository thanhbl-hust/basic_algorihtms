class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        int start = nums[nums.size() - 1];
        if(start != length) return length;
        if(nums[0] != 0) return 0;
        start = length - 1;
        while(start >= 1){
            if(nums[start] - nums[start - 1] != 1){
                return nums[start] - 1;
            }
            start -= 1;
        }
        return -1;
    }
};