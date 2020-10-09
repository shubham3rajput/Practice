def query(a,l1):
    if a in l1:
        return True
    else:
        return False

def add(a,l1):
    l1.append(a)
      
def remove(a,l1):
    l1.remove(a)

def size(l1):
    return len(l1)


n=int(input())


l1=[]
l2=[]
for i in range(0,n):
    m=input()
    if m=="size":
        q=-1
    else:
        p,q=map(str,m.split())
    l1.append(p)
    l2.append(q)

l3=[]
l4=[]
for i in range(0,n):
    if l1[i]=="query":
        p=query(l2[i],l4)
        print(p)
        l3.append(p)
    elif l1[i]=="add":
        add(l2[i],l4)
    elif l1[i]=="remove":
        remove(l2[i],l4)
    elif l1[i]=="size":
        r=size(l4)
        print(r)
        l3.append(r)
    else:
        {}  


