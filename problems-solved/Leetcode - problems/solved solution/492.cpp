class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> a;
        a.push_back(area);
        a.push_back(1);
        int distance = area - 1;

        for(int i = 2; i <= (int)sqrt(area); i++){
            if(area % i == 0 and abs((area / i) - i ) < distance){
                a[0] = max(i, area / i);
                a[1] = min(i, area / i);
            }
        }

        return a;
    }
};