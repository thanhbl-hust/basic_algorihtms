class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> b = heights;
        sort(b.begin(), b.end());
        for(int i = 0; i < b.size(); i++){
            if(b[i] != heights[i]){
                count += 1;
            }
        }
        return count;
    }
};