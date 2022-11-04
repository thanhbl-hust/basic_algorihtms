class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int check;
        int count = 0;
        if(ruleKey == "type") check = 0;
        if(ruleKey == "color") check = 1;
        if(ruleKey == "name") check = 2;
        for(int i = 0; i < items.size(); i++){
            if(items[i][check] == ruleValue){
                count += 1;
            }
        }
        return count;
    }
};