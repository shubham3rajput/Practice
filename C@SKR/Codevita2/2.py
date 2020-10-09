# n=int(input())
# s1=set(map(int,input().split()))
# m=int(input())
# s2=set(map(int,input().split()))
# s3=s1.union(s2)
# print(len(s3))



n = input()
s = set(map(int, raw_input().split()))
m=int(raw_input())
for i in xrange(m):
    p=raw_input().split()
    if p[0]=="intersection_update":
        s1 = set(map(int, raw_input().split()))
        s=s.intersection(s1)
    elif p[0]=="update":
        l2=[]
        for i in range(0,int(p[1])):
            b=int(raw_input().
            l2.append(b)  
            s3=set(l2)
            s=s.update(s3)
    elif p[0]=="symmetric_difference_update":
        l2=[]
        for i in range(0,int(p[1])):
            b=int(raw_input())
            l2.append(b)
            s5=set(l2)
            s=s^s3

    else:
        l2=[]
        for i in range(0,int(p[1])):
            b=int(input())
            l2.append(b)
            s5=set(l2)
            s=s-s3

print sum(list(s))we




# ------------------------------------------------------------------------------
# 
n = input()
s = set(map(int,input().split()))
m=int(input())
for i in range(m):
    p=input().split()
    if p[0]=="intersection_update":
        s1 = set(map(int, input().split()))
        s=s.intersection(s1)
    elif p[0]=="update":
        l2=[]
        for i in range(0,int(p[1])):
            b=input().split()
            for i in range(len(b)):
                s.add(b[i])

    elif p[0]=="symmetric_difference_update":
        l2=[]
        for i in range(0,int(p[1])):
            b=input().split()
            for i in range(0,len(b)):
                l2.append(b[i])
            s5=set(l2)
            s=s^s5

    elif p[0]=="difference_update" :
        l8=[]
        for i in range(0,int(p[1])):
            b=input().split()
            for i in range(0,len(b)):
                l8.append(b[i])
        s5=set(l2)
        s=s-s5

print (sum(set(s)))
# ------------------------------------------------------------------------------