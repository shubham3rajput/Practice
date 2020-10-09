
# ml=[]
# sl=[]

# for i in range(0,m):
#     for j in range(0,n):
#         p=input().split(" ")
#         sl.append(p)
#     ml.append(sl)    




# print(ml)        

# m,n=map(int,input().split(" "))
# tr,tc=map(int,input().split(" "))

# arr1=[[input() for i in range(m)]for j in range(n)]


m=3
n=3
tr=1
tc=3
count=0
arr=[['W', 'T', 'T'], ['T', 'W', 'W'], ['W', 'T', 'T']]
print(arr)

for i in range(m):
    for j in range(n):
        if(arr[tr+1][tc+1]=="T" or arr[tr+1][tc]=="T" or arr[tr][tc+1]=="T" or 
        )


print(count)






# for (int i = tr - 2; i <= tr; i++)
#     {
#         for (int j = tc - 2; j <= tc; j++)
#         {

#             if ((i > 0 && i <= m) && (j > 0 && j <= n))
#             {
#                 char p = arr1[i][j];

#                 if (&p == "W")
#                 {
#                     count += 1;
#                     tr = i;
#                     tc = j;
#                 }
#                 else
#                 {
#                 }
#             }

#             else
#             {
#             }
#         }
#     }

#     cout << count;
# }