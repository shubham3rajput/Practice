# a=6
# b=3

# if a>b:
#     l=a
#     w=b
# else:
#     l=b
#     w=a

# count=0
# q=l//w
# r=l%w
# count+=q

# if r>w:
#     q2=r//w
#     r2=r%w
#     count+=q2
#     if r2==1:
#         q3=w
#         count+=q3    
# else:
#     q2=w//r
#     r2=w%r
#     count+=q2
#     if r2==1:
#         q3=r
#         count+=q3

# print(count)





a=int(input())
b=int(input())
count=0

while a>1:
    if a>b:
        q=a//b
        r=a%b
        count+=q
        a=r
        if r==1:
            w=b
    elif a<b:
        q=b//a;
        r=b%a
        count+=q
        if r==1:
            w=a
        a=r    

if a==1:
    count+=w

print(count)



