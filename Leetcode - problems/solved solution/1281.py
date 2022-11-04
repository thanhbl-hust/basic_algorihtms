class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        t = 1
        sum = 0
        for i in str(n):
            t *= int(i)
            sum += int(i)

        return t - sum;