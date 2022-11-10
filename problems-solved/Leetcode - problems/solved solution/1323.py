class Solution:
    def maximum69Number (self, num: int) -> int:
        list = [x for x in str(num)]
        st = 0
        while st < len(list):
            if list[st] == '6':
                list[st] = '9'
                break 
            st += 1
        return int("".join(list))