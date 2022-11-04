class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        if(nums[0] != nums[1]) return nums[0];
        if(nums[nums.size() - 1] != nums[nums.size() - 2]) return nums[nums.size() - 1];
        int start = 1;
        while(start < nums.size() - 1){
            if(nums[start] != nums[start - 1] && nums[start] != nums[start + 1]){
                return nums[start];
            }
            start += 1;
        }
        return -1;
    }
};