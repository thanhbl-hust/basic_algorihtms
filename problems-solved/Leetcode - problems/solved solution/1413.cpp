class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> step;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                step.push_back(nums[i]);
            }else{
                step.push_back(step[i - 1] + nums[i]);
            }
        }
        int minVal = *min_element(step.begin(), step.end());
        if(minVal <= 0){
            return -1*minVal + 1;
        }
        return 1;
    }
};