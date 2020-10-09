




import math 
  
# function to check  
# Pronic Number 
def checkPronic (x) : 
  
    i = 0
    while ( i <= (int)(math.sqrt(x)) ) : 
          
        # Checking Pronic Number  
        # by multiplying consecutive  
        # numbers 
        if ( x == i * (i + 1)) : 
            return x
        i = i + 1
  
    return -1



def check(str1, sstr): 
   if (str1.find(sstr) != -1):
      print(sstr,  )
    
    
x=input()

y=int(x)

for i in range(1,y):
    if(checkPronic(i)!=-1):
        check(x,str(i))
        
        

    



    
    
    
    



  