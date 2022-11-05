class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> boo;
        for(int i = 0; i < candies.size(); i++){
            boo.push_back(false);
        }
        int count = 0;
        int maxVal = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxVal){
                boo[i] = true;
            }
        }
        return boo;
    }
};