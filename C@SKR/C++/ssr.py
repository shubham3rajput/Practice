# # python3 program for power set 
  
# import math; 
  
# def printPowerSet(set,set_size): 
      
#     # set_size of power set of a set 
#     # with set_size n is (2**n -1) 
#     pow_set_size = (int) (math.pow(2, set_size)); 
#     counter = 0; 
#     j = 0; 
      
#     # Run from counter 000..0 to 111..1 
#     for counter in range(0, pow_set_size): 
#         for j in range(0, set_size): 
              
#             # Check if jth bit in the  
#             # counter is set If set then  
#             # print jth element from set  
#             if((counter & (1 << j)) > 0): 
#                 print(set[j], end = ""); 
#         print(""); 
  
# # Driver program to test printPowerSet 

# set = ['1','2','3']; 
# printPowerSet(set, 3); 


# print(set("96989"))


# import itertools  
# a = ['9','3','3']  
# for i in range(len(a)):
#     x=list(itertools.permutations(a,i+1))
#     print(x)







# # Python3 program to find all pairs in 
# # a list of integers with given sum 

# def findPairs(lst, K): 
# 	res = [] 
# 	while lst: 
# 		num = lst.pop() 
# 		diff = K - num 
# 		if diff in lst: 
# 			res.append((diff, num)) 
		
# 	res.reverse() 
# 	return res 
	
# # Driver code 
# lst = [11,20,-16,4,10] 
# K = 30
# print(findPairs(lst, K)) 



# Python program to print all subsets with given sum 

# The vector v stores current subset. 
def printAllSubsetsRec(arr, n, v, sum) : 

	# If remaining sum is 0, then print all 
	# elements of current subset. 
	if (sum == 0) : 
		for value in v : 
			print(value, end=" ") 
		print() 
		return
	

	# If no remaining elements, 
	if (n == 0): 
		return

	# We consider two cases for every element. 
	# a) We do not include last element. 
	# b) We include last element in current subset. 
	printAllSubsetsRec(arr, n - 1, v, sum) 
	v1 = [] + v 
	v1.append(arr[n - 1]) 
	printAllSubsetsRec(arr, n - 1, v1, sum - arr[n - 1]) 


# Wrapper over printAllSubsetsRec() 
def printAllSubsets(arr, n, sum): 

	v = [] 
	printAllSubsetsRec(arr, n, v, sum) 


# Driver code 

arr = [1,2,-3,4,-5]
sum = -1
n = len(arr) 
printAllSubsets(arr, n, sum) 

# This code is contributed by ihritik 

