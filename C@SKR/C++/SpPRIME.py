# N=int(input("Enter N"))

# list_x=[]
# list_y=[]

# for i in range(0,N):
#     list_x.append(i)
#     list_y.append(i)

# # def sum_of_digits(a,b):   


import itertools

#for checking the prime number or primality test
def isprime(no):
    isprime=True
    if(no==1):
        return False
    for i in range(2,n//2+1):
        if(no%i==0):
            isprime=False
                
    return isprime
    return isprime


#for getting the sum of digits of any number
def sumofdigit(s):
    tot=0
    for i in str(s):
        tot+=int(i)
    return tot

#taking input as no
n=int(input())
#converting to list as range from 0 to n
l=list(range(n+1))
#for making permutations
permute=list(itertools.permutations(l,2))
count_pair=0
print(permute)



for data in permute:
    if(data[0]<data[1] and isprime(sumofdigit(data[0])+sumofdigit(data[1]))):
        print(data)
        count_pair+=1

print(count_pair)