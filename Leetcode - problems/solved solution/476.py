class Solution:
    def findComplement(self, num: int) -> int:
        s = bin(num)[2:]
        u = "0b"
        for i in s:
            if i == '1':
                u += '0'
            else:
                u += '1'
        n = int(u, 2)
        return n