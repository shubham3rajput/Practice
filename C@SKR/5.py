import math

n=int(input())

r1,r2=map(int,input().split())

rev=int(input())

diff=0
count=0
for i in range(1,12):
    for j in range(0,30):
        nop=((6-i)**2)+ math.sqrt((j-15)**2)
        if nop<20:
            p=20-nop
            diff +=p
            count+=1
    

print(diff) 
print(count)           
