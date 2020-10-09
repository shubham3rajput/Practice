n,m=(input().split(" "))

if int(n) > 100000 or int(m)>100000:
    print("True")

p=list(map(int, input().split())) 


A=list(map(int, input().split()))

B=list(map(int, input().split()))

count=0
for i in p:
    for j in A:
            if i==j:
                count+=1
    for j in B:
        if i==j:
            count-=1             

            

 
print(count)            