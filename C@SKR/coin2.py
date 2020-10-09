n=int(input())

x=(n-4)//5

p=n-(5*x)
if p%2==0:
    y=2
else:
    y=1    

z=int((p-y)/2)

print(x+y+z,x,z,y)