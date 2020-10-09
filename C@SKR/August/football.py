from collections import Counter
b=int(input())
for i in range(b):
    k=int(input())
    x=[]
    y=[]
    for j in range(k):
        g=input().split()
        if(int(g[1])>=int(g[3])):
            x.append(int(g[1])-int(g[3]))
            y.append(g[0])
    if(len(x)==0):
        print("-1")
    else:
        c=Counter(x)
        v=max(c.values())
        m=[s for s in c.keys() if c[s]==v]
        p=max(m)
        #j=0
        """for z in range(len(y)-1):
            if(x[j]==p):
                j=j+1
        print(x[j-1],y[j-1])"""
        j=len(y)-1
        while(x[j]!=p):
            j-=1
        print(x[j],end=" ")
        print (y[j])
                
 
 