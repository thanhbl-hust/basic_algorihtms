class Solution {
public:
    int commonFactors(int a, int b) {
        int maxVal = max(a, b);
        int minVal = min(a, b);
        int count = 0;
        for(int i = 1; i <= minVal / 2; i++)   {
            if(maxVal % i == 0 && minVal % i == 0){
                count += 1;
            }
        }
        if(maxVal % minVal == 0){
            count += 1;
        }
        return count;
    }
};