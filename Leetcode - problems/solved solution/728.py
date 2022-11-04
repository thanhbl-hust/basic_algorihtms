class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        val = []
        for i in range(left, right + 1):
            count = 0
            for x in str(i):
                if x != '0' and i % int(x) == 0:
                    count += 1
            if count == len(str(i)):
                val.append(i)
        return val
                    