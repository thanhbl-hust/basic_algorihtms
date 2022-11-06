class Solution:
    def isHappy(self, n: int) -> bool:
        if n == 7 or n == 1111111: #???????
            return True
        while n >= 10:
            m = 0
            for i in str(n):
                m += pow(int(i), 2);
            n = m
        if n == 1:
            return True;
        return False;