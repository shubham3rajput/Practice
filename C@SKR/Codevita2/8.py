e=int(input())
f=int(input())
g=int(input())
h=int(input())

count=0
if 0<e<f<1501 and 0<g<h<1501:
    for i in range(e,f+1):
        for j in range(g,h+1):
            a=i
            b=j

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
                else:
                    pass       

                if a==1:
                    count+=w
                else:
                    pass    

    print(count,"\n")

else:
    pass



