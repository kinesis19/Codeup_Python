N = int(input())
numberList = list(map(int, input().split()))
v = int(input())
cnt = 0
for x in range(N):
    if numberList[x] == v:
        cnt = cnt + 1
print(cnt)