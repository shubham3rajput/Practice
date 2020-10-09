# 8

# 0  3
# 1  6
# 2  2
# 3  8
# 4  9
# 5  5
# 6  10
# 7  1

# peaks/crests:

# 1   6  
# 4   9   
# 6   10


# 3 
# 1

# troughs:

# 2   2
# 5   5

# 3
# -------------------------------------------------------------------------------------------------------------------
# ---------------------------------------------------------------------------------------------------------------------

import itertools


def isPrime(n):
    if(n==1):
        return False
    for i in range(2,n//2):
        if(n%i==0):
            return False
    return isPrime        


















n=int(input("Enter N \n"))

lista=list(range(0,n+1))

print(list)

permute=(list(itertools.permutations(lista,2)))
print(permute)
print(len(permute))

count = 0

for data in permute:
    if(data[0]<data[1] and isPrime(data[0]+data[1])):
        print(data)
        count+=1
print(count)        
x=1