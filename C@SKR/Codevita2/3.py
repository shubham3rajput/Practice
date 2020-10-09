x = list(map(int, input().split())) 
avg=(sum(x)//2)+1
print(avg)
x.sort()
list2=[]
sum=0

for i in x:
    sum+=i
    list2.append(sum)
print(list2)
    
list2.sort(reverse=True)
diff=1000
for i in list2:
    if abs(i-avg)<diff:
        diff=abs(i-avg)
print(diff)