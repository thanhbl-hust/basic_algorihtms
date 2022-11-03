class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> value;
        
        value.push_back(0);
        for(int i = 0; i < gain.size(); i++){
            value.push_back(gain[i] + value[i]);
        }
        
        sort(value.begin(), value.end());
        return value[value.size() - 1];
    }
};