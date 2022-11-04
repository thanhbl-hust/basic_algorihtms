class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        int bonus = n;
        for(int i = 0; i < n; i++){
            a.push_back(nums[i]);
            a.push_back(nums[i + bonus]);
        }
        return a;
    }
};