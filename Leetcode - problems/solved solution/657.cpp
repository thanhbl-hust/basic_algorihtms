class Solution {
public:
    bool judgeCircle(string s) {
        int r = 0, l = 0, u = 0, d = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'U') u += 1;
            if(s[i] == 'D') d += 1;
            if(s[i] == 'R') r += 1;
            if(s[i] == 'L') l += 1;
        }
        if(u == d and r == l){
            return true;
        }
        return false;
    }
};