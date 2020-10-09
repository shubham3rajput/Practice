inp = input().split(" ")
n = int(inp[0])
k = int(inp[1])
arr = [int(i) for i in input().split()][:n]
count = 0
for x in arr:
    s = set(arr).intersection(range(x-k,x+k+1,1))
    if len(s)==1:
        if x not in s:
            count = count+1
    else:
        if(s):
            count = count+1
print(count)