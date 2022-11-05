class Solution {
public:
    int sum(vector<int> a){
        int sum1 = 0;
        for(int i = 0; i < a.size(); i++){
            sum1 += a[i];
        }
        return sum1;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue = sum(accounts[0]);
        for(int i = 0; i < accounts.size(); i++){
            if(sum(accounts[i]) > maxValue){
                maxValue = sum(accounts[i]);
            }
        }
        return maxValue;
    }
};