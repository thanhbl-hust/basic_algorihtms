class Solution {
public:
    int count(int n){
        int value = 0;
        while(n > 0){
            value += n % 10;
            n /= 10;
        }
        return value;
    }
    int addDigits(int num) {
        while(num >= 10){
            num = count(num);
        }
        return num;
    }
};