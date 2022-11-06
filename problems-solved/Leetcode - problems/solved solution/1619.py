class Solution:
    def trimMean(self, a: List[int]) -> float:
        a.sort()

        a = a[int(len(a) / 20): int(len(a) * 19 / 20)]
 

        return sum(a) / len(a)