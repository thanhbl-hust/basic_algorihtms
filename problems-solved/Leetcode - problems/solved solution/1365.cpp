class Solution {
public:
    int count(vector<int> a, int n){
        int c = 0;
        int value = a[n];
        for(int i = 0; i < a.size(); i++){
            if(a[i] < a[n]){
                c += 1;
            }
        }
        return c;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ls;
        for(int i = 0; i < nums.size(); i++){
            ls.push_back(count(nums, i));
        }
        return ls;
    }
};