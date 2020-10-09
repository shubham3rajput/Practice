# noprimes = [j for i in range(2, 8) for j in range(i*2, 100, i)]
# print(noprimes)
# ==============================================================================
# for i in range(2,8):
#     for j in range(i**2,100,i):
#         print(j)



# ==============================================================================
# ==============================================================================



# print(permute)

# ==============================================================================
# ==============================================================================
# import operator
# import itertools
# from collections import Counter
# from math import factorial
# from functools import reduce
# def npermutations(l):
#     num = factorial(len(l))
#     mults = Counter(l).values()
#     den = reduce(operator.mul, (factorial(v) for v in mults), 1)
#     return num // den

# l=list(range(1,100))
# permute=list(itertools.permutations(l,2))
# x=npermutations(permute)
# print(x)
# ==============================================================================
# ==============================================================================

# s=str(input())

# count=0
# for i in range(len(s)):
#     if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'):
#         count+=1
# print(count)        
# ==============================================================================
# ==============================================================================

# s=str(input())

# for i in range(len(s)):
#     if s[i]=='1':
#         count1 += 1

# ==============================================================================

s=int(input())
