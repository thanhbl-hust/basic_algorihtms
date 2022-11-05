class Solution:
    def firstPalindrome(self, s: List[str]) -> str:
        i = 0
        while i < len(s):
            if s[i] == s[i][::-1]:
                return s[i]
            i += 1
        if i == len(s):
            return ""