class Solution {
public:
    int fib(int n) {
        vector<int> a;
        a.push_back(0);
        a.push_back(1);
        a.push_back(1);
        if(n <= 2) return a[n];
        for(int i = 3; i <= n; i++){
            a.push_back(a[i - 2] + a[i - 1]);
        }
        return a[n];
    }
};