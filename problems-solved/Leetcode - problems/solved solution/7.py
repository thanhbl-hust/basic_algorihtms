class Solution:
    def reverse(self, x: int) -> int:
        if x > 2**31 - 1 or x < -2 ** 31:
            return 0
        if x >= 0:
            if int(str(x)[::-1]) <= 2**31 - 1:
                return int(str(x)[::-1])
            else:
                return 0 
        else:
            if -1 * (int(str(x)[1:][::-1])) >= -2 ** 31:
                return -1 * (int(str(x)[1:][::-1]))
            else:
                return 0