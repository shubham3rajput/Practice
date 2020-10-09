# a,b=0,1

# while(a<20):
#     print(a)
#     a,b=b,a+b

# for i in range(20):
    
#     if( i%2==0):
#         print(i)
#         continue

# def ask_ok(prompt, retries=4, reminder='Please try again!'): 
#     while True:
#         ok = input(prompt)
#         if ok in ('y', 'ye', 'yes'): 
#             return True 
#         if ok in ('n', 'no', 'nop', 'nope'):
#             return False
                
#         retries = retries - 1 
#     if retries < 0: 
#         raise ValueError('invalid user response')
#     print(reminder)


# import random
# print(dir(random))

# import builtins
# print(dir(builtins))

# import sound.effects.echo
# sound.effects.echo.echofilter(input, output, delay=0.7, atten=4)

# import math
# print(dir(math))


table={'Shubham':9689721206 , 'Sakshi':9370573973 , 'Megha':9767141665}
for name,phone in table.items():
    print(f'{name:10} => {phone:10d}')