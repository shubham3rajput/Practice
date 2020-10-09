n=int(input())

p=input()
q=input()

l1=[]
l2=[]
for i in range(n):
    a=p[i]
    l1.append(a)
    b=q[i]
    l2.append(b)



count=0

for i in l1:
    for j in l2:
        if i==j:
            count+=1
print(count)

print(l1-l2)