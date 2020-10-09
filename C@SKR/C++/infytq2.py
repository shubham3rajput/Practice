# # x=str(input(""))

# # def vowel(c):
# #     v=list("aeiou")
# #     if c in v:return True
# #     return False


# # w=[]
# # for i in x:
# #     if vowel(i):
# #         w.append(i)
        
# # p=w[::-1]

# # if(w==p):
# #     print("Y")        


# # Armstrong Number

# # m=int(input("Enter a number \n"))

# # x=m
# # sum=0
# # while x>0:
# #     digit=x%10
# #     sum+=digit**3
# #     x//=10

# # if  sum==m:
# #     print("Y")  

# # ==============================================================================
# # Array Rotation


# # def Rotatearr(arr,size,d):
# #     for i in range(d):
# #         Rotatearrbyone(arr,size)
        
# # def Rotatearrbyone(arr,size):
# # #     temp = []
# # #     for i in range(size):
# # #         arr[i]=
        
# # # Function to left Rotate arr[] of size n by 1*/ 

        
        
# # # Python3 program to rotate an array by 
# # # d elements 
# # # Function to left rotate arr[] of size n by d*/ 
# # def leftRotate(arr, d, n): 
# # 	for i in range(d): 
# # 		leftRotatebyOne(arr, n) 

# # def leftRotatebyOne(arr, n): 
# # 	temp = arr[0] 
# # 	for i in range(n-1): 
# # 		arr[i] = arr[i + 1] 
# # 	arr[n-1] = temp 

# # arr = [1, 2, 3, 4, 5, 6, 7] 
# # n= len(arr)
# # leftRotate(arr, 2, 7) 


# # for i in range(n):
# #     print(arr[i], end="   ")	

# # utility function to print an array */ 
# # def printArray(arr, size): 
# # 	for i in range(size):
# #           print(" %d "% arr[i] , end =" ")
# # 		# print ("% d"% arr[i], end =" ") 


# # Driver program to test above functions */ 

# # printArray(arr, 7) 

# # This code is contributed by Shreyanshi Arun 
                
    

# # ==============================================================================

# # class ClassA:
    
# #      def _init_(self, val1) :

# #         self.value = val1

# #      def method_a(self) :

# #         return 10+self.value

# # class ClassB:

# #      def _init_(self, val2):

# #         self. num=val2

# #      def method_b(self, obj):

# #         return obj.method_a()+self.num

# # obj1 = ClassA(20)

# # obj2=ClassB(20)   

# # print(obj2.method_
# # b(obj1)) 


     
# # a_string = "9 3 0 1 2 5 6 2"
# # a_list = a_string.split()
# # map_object = map(int, a_list)
# # # applies int() to a_list elements

# # list_of_integers = list(map_object)
# # print(list_of_integers)


# # import math 
  
# # # function to check  
# # # Pronic Number 
# # def checkPronic (x) : 
  
# #     i = 0
# #     while ( i <= (int)(math.sqrt(x)) ) : 
          
# #         # Checking Pronic Number  
# #         # by multiplying consecutive  
# #         # numbers 
# #         if ( x == i * (i + 1)) : 
# #             return x
# #         i = i + 1
  
# #     return -1
 
 
# # for i in list_of_integers:
# #        print(checkPronic(i))




# # a=int(input("Enter first number:"))
# # b=int(input("Enter second number:"))
# # c=int(input("Enter third number:"))
# # d=[]
# # d.append(a)
# # d.append(b)
# # d.append(c)
# # for i in range(0,3):
# #     for j in range(0,3):
# #         for k in range(0,3):
# #             if(i!=j&j!=k&k!=i):
# #                 print(d[i],d[j],d[k])




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
# set = ['a', 'b', 'c']; 
# printPowerSet(set, 3); 








def Sumk(li,k,res):
    if k == 0:
        print(res[1:])
        return
    if len(li) == 0:
        return
    if k < 0:
        return
    Sumk(li[1:],k,res)
    res = res+" "+str(li[0])
    Sumk(li[1:],k-li[0],res)
 
n = int(input())
li = [int(i) for i in input().split()]
k = int(input())
res = ""
Sumk(li,k,res)



