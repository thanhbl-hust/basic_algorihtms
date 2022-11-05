class Solution {
public:
	
	bool check(vector<string>& strs, int n){
		for(int i = 0; i < strs.size() - 1; i++){
			if(strs[i][n] != strs[i + 1][n]){
				return false;
			}
		}
		return true;
	}
	
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size() == 1) return strs[0];
        int minValue = strs[0].size();
        for(int i = 1; i < strs.size(); i++){
        	if(strs[i].size() < minValue){
        		minValue = strs[i].size();
			}
		}
		int start = 0;
		while(start < minValue){
			if(check(strs, start) == false){
				break;
			}
			s.push_back(strs[0][start]);
			start += 1;
		}
		return s;
    }
};