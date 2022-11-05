class Solution {
public:
    int getSum(vector<int> a, int start, int end){
        int sum = 0;
        for(int i = start; i < end; i++){
            sum += a[i];
        }
        return sum;
    }
    int sumOddLengthSubarrays(vector<int>& nums) {
        int sum = 0;

        for(int i = 1; i <= nums.size(); i += 2){
            for(int j = 0; j < nums.size() - i + 1; j++){
                sum += getSum(nums, j, j + i);
            }
        }
        return sum;
    }
};