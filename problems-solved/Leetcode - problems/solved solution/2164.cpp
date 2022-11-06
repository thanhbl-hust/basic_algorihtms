class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i = 0; i + 2 < nums.size(); i += 2){
            for(int j = i + 2; j < nums.size(); j += 2){
                if(nums[j] < nums[i]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        for(int i = 1; i + 2 < nums.size(); i += 2){
            for(int j = i + 2; j < nums.size(); j += 2){
                if(nums[j] > nums[i]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};