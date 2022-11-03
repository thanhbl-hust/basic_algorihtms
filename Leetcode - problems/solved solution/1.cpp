class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> index;
        int c = 0;
        for(int i = 0; i < a.size() - 1; i++){
            for(int j = i + 1; j < a.size(); j++){
                if(a[i] + a[j] == target){
                    c += 1;
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
                if(c == 1) break;
            }
            if(c == 1) break;
        }
        return index;
    }
};