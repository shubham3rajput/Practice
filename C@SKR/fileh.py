# fh=open("skr.txt","r")

# for line in (fh):
#     print(line)



thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}



list1=[]
for i in thisdict:
    list1.append(i)
        
thisdict.clear()
for name in list1:
    thisdict[name]=thisdict.get(name,0)+1
print(thisdict)            
print(thisdict.keys())

print(thisdict.items())