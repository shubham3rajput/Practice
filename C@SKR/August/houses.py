# Input = {6,7,1,3,8,2,5}
        # {0,1,2,3,4,5,6} 


# Output = {20}


l1=list(map(int,input().split(" ")))
l2=[]
l3=[]

for i in range (len(l1)):
    if i%2==0:
        l2.append(l1[i])
    else:
        l3.append(l1[i])



suml2=0
for i in l2:
    suml2+=i

suml3=0    
for j in l2:
    suml3+=j

print(l2,l3)


if suml2 > suml3:
    print(suml2)
else:
    print(suml3)    
