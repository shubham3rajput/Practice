
def pairs(a,k):
    for i in range(n):
        for j in range(n):
            if((l1[j]>=l1[i]-k) and (l1[j]<=l1[i]+k+1)):
                l2.append(l1[j])

    count2=0
    a=Counter(l2)
    for i in range(n):
        if a[l1[i]] <=1:
            count2+=1
    ret        


# Tail starts here
if __name__ == '__main__':
    n,k=map(int,input().split(" "))

    l1 = list(map(int, input().split()))
    z=pairs(l1,k)
    print(z)
    # if(z==0):
    #     print(n)
    # else:
    #     print(n-(z//2))    