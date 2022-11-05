class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index;
        for(int i = 0; i < 2; i++){
            index.push_back(-1);
        }
        
        int start = 0;
        int end = nums.size() - 1;
        while(start < nums.size()){
            if(nums[start] == target){
                break;
            }
            start += 1;
        }
        while(end >= 0){
            if(nums[end] == target){
                break;
            }
            end -= 1;
        }
        
        if(start != nums.size()){
            index[0] = start;
            index[1] = end;
        }
        return index;
    }
};