class Solution {
public:
    bool check(string s, int n){
        for(int i = 0; i < n; i++){
            if(s[i] == s[n]){
                return true;
            }
        }
        return false;
    }
    char repeatedCharacter(string s) {
        for(int i = 1; i < s.size(); i++){
            if(check(s, i) == true){
                return s[i];
            }
        }
        return s[0];
    }
};