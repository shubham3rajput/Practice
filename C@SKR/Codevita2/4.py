import collections

x=['a','b','c','d','e','f']

y=[3,6,5,4,1,2]

z=[1,2,3,4,5,6]
count=0

for i in range(0,6):
    for j in y:
        z[j-1]=x[i]
        count+=1
print(z)        



print(count)            