
 
n=int(input())
if(n<1 | n>1000):
	print("")
else:	
	n1=n%5
	r=5+n1
	x=0
	y=0
	z=0

	if r==1:
		x=1
	elif r==2:
		x=2
	elif r==3:
		x=1
		y=1
	elif r==4:
		x=2
		y=1
	elif r==5:
		x=1
		y=2
	elif r==6:
		x=2
		y=2
	elif r==7:
		x=1
		y=3
	elif r==8:
		x=2
		y=3
	elif r==9:
		x=2
		y=1
		z=1
	else:
		print("No")
	
	
h=((n//5)-1)+z

list1=[]

list1.append(h+y+x)
list1.append(h)
list1.append(y)
list1.append(x)

print(*list1)