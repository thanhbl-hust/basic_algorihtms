class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(count(nums.begin(), nums.end(), target) != 0){
            int start = 0;
            while(start < nums.size()){
                if(nums[start] == target){
                    return start;
                    break;
                }
                start += 1;
            }
        }else{
            //khong co trong nums;
            int start = nums.size() - 1;
            while(start >= 0){
                if(nums[start] < target){
                    return start + 1;
                    break;
                }
                start -= 1;
            }
            if(start == -1){
                return 0;
            }
        }
        return -1;
    }
};