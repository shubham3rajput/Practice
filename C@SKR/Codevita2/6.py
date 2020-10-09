# n=int(input())

x = list(map(int, input().split())) 

def Digits(n): 
    largest = 0
    smallest = 9
  
    while (n): 
        r = n % 10
  
        # Find the largest digit 
        largest = max(r, largest) 
  
        # Find the smallest digit 
        smallest = min(r, smallest) 
  
        n = n // 10
  
    return(largest*11+smallest*7)


list3=[]
for i in x:
    p=Digits(i)
    if p>99:
        p=p%100
        list3.append(p)
    else:
        list3.append(p)    



list4=[]
list5=[]
for i in range(len(list3)):
    if i%2==0:
        p=list3[i]
        list4.append(p)
    else:
        p=list3[i]
        list5.append(p)

def msb(n): 
    largest = 0
  
    while (n): 
        r = n % 10
  
        # Find the largest digit 
        largest = max(r, largest)  
  
        n = n // 10
  
    return(largest)

count=0

for i in range(0,len(list4)):
    for j in range(len(list4),0):
        if list4[i]==list4[j]:
            count+=1

        if msb(list4[i])==msb(list4[j]):
            count+=1

for i in range(0,len(list5)):
    for j in range(len(list5),0):
        if list5[i]==list5[j]:
            count+=1

        if msb(list5[i])==msb(list5[j]):
            count+=1        

print(count+1)