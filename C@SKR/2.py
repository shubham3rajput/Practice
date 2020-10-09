import math
import itertools
def isPrime(x):
    for i in range(2,x):
        if(x%i==0):
            return False
            break
    else:
        return True    
        
# print(isPrime(10))      
            
        
n1,n2=map(int,(input().split( )))


# n1=2
# n2=40

list2=[]
for i in range(n1,n2):
    if isPrime(i):
        list2.append(i)



# list3=[list2,list2]

# comb=[p for p in itertools.product(*list3)]

# for i in range(0,len(comb)):
#     m=comb[i][0]
#     n=comb[i][1]
#     if m==n:
#         del comb[i]

print(comb)        












# print(m1)
# print(m2)        

     







                            
            
    
    