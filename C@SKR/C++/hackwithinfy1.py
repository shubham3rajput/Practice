

# l=[int(i) for i in input().split()]
# ------------------------------------------------------------------------------
# def add(n):
#     return n**3

# ------------------------------------------------------------------------------
# # # l=[1,2,3,4]

# # result=map(add,l)
# # print(list(result))
# ------------------------------------------------------------------------------

# a,b,c=map(int,input().split())
# print(a,b,c)\
 # -----------------------------------------------------------------------------   
    
# matrix=[]    

# r,c=map(int,input().split(","))

# for i in range(0,r-1):
#     j=[]
#     for k in range(0,c-1):
#         j.append(int(input()))
#     matrix.append(j)   
        
# for i in range(0,r-1):
#     for k in range(0,c-1):
#         print(matrix[i][k],end(" "))
    
#     print(mat)
# ------------------------------------------------------------------------------

# inpuut=[int(i) for i in input().split()]
# print(inpuut)

# cubic=[]
# n=int(input("Enter the input"))
# for i in range(n):
#     m=int(input())
#     cubic.append(m)
    
    
# print(cubic)    
# cube=map(add,cubic)    
# print(list(cube))    
# ------------------------------------------------------------------------------    

# ==============================================================================
# l=[]
# n1=int(input())
# for i in range(n1):
#     n_inp=int(input())
#     l.append(n_inp)

# print(l)    
# n2=int(input())
# for i in range(n2):
#     n_inpp=int(input())
#     l.append(n_inpp)
      
    
# print(l)      
# ==============================================================================

# l2=[]
# n=int(input())
# for i in range(n):
#     l=[int(i) for i in input().split()]
#     l2.append(l)
# print(l2)    

# ==============================================================================
# Dynamic Programming Python implementation of Coin 
# Change problem 
def count(S, m, n): 
	# We need n+1 rows as the table is constructed 
	# in bottom up manner using the base case 0 value 
	# case (n = 0) 
	table = [[0 for x in range(m)] for x in range(n+1)] 

	# Fill the entries for 0 value case (n = 0) 
	for i in range(m): 
		table[0][i] = 1

	# Fill rest of the table entries in bottom up manner 
	for i in range(1, n+1): 
		for j in range(m): 

			# Count of solutions including S[j] 
			x = table[i - S[j]][j] if i-S[j] >= 0 else 0

			# Count of solutions excluding S[j] 
			y = table[i][j-1] if j >= 1 else 0	

			# total count 
			table[i][j] = x + y 

	return table[n][m-1] 

# Driver program to test above function 
arr=[]
n1=int(input("Enter size of arr"))
for i in range(n1):
    p=int(input())
    arr.append(p)
    
sum=int(input("Enter sum"))



print(count(arr, n1, sum)) 

# This code is contributed by Bhavya Jain 














# ==============================================================================