n,k=map(int,input().split(" "))
arr = list(map(int, input().split(" ")))

count = 0
arr.sort()
for x in range(n):
    add = arr[x] + k
    sub = arr[x] - k
    try:
        if (x+1) > (len(arr)-1):
            if (arr[x-1]>=sub):
                count = count + 1
        elif (x-1) < 0:
            if (arr[x+1])<= add:
                count = count + 1
        else:
            if ((arr[x+1]<= add) or (arr[x-1]>=sub)):
                count = count + 1
    except:
        continue
    

print(count,end="")


# from collections import Counter

# n,k=map(int,input().split(" "))
# l1= list(map(int, input().split(" ")))

# count = 0
# l1.sort()
# l2=[]
# for i in range(n):
#     for j in range(n):
#         if((l1[j]>=l1[i]-k) and (l1[j]<=l1[i]+k+1)):
#             l2.append(l1[j])

# count2=0
# a=Counter(l2)

# for i in range(n):
#     try:
#         if a[l1[i]] <=1:
#             count2+=1

#     except:
#         continue    
    

# print(n-count2,end="")







#!/usr/bin/py
# Head ends here