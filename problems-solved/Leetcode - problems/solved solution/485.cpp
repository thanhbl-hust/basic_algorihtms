class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        vector<int> index;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                index.push_back(i);
            }
        }
        if(index.size() == 0) return nums.size();
        if(index.size() == nums.size()) return 0;
        int maxValue = index[0];
        if(nums.size() - 1 - index[index.size() - 1] > maxValue){
            maxValue = nums.size() - 1 - index[index.size() - 1];
        }

        for(int i = 0; i < index.size() - 1; i++){
            if(index[i + 1] - index[i] - 1 > maxValue){
                maxValue = index[i + 1] - index[i] - 1;
            }
        }
        return maxValue;
    }
};