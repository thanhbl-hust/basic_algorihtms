class Solution:
    def toLowerCase(self, s: str) -> str:
        st = ""
        for i in s:
            st += i.lower()
        return st;