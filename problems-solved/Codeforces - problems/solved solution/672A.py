n = int(input())

s = ""
start = 1
while len(s) < n - 1:
    s += str(start)
    start += 1

print(s[n - 1])