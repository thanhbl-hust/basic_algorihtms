class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(count(nums.begin(), nums.end(), original) != 0){
            original *= 2;
        }
        return original;
    }
};