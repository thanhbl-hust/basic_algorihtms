class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        if(nums.size() == 1) return nums[0];
        
        int value = 0;
        sort(nums.begin(), nums.end());
        
        if(nums[0] != nums[1]){
            value += nums[0];
        }
        if(nums[nums.size() - 1] != nums[nums.size() - 2]){
            value += nums[nums.size() - 1];
        }
        for(int i = 1; i < nums.size() - 1; i++){
            if(nums[i] != nums[i - 1] and nums[i] != nums[i + 1]){
                value += nums[i];
            }
        }
        return value;
    }
};