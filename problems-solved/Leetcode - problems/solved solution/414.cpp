class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count = 0;
        int start = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while(start >= 1){
            if(nums[start] != nums[start - 1]){
                count += 1;
                if(count == 2){
                    return nums[start - 1];
                    break;
                }
            }
            start -= 1;
        }
        return nums[nums.size() - 1];
    }
};