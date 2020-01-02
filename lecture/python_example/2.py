f=open("test1.txt", "a+")


for i in range (2):
 f.write ("this is an appended line %d \n" %(i+1))

f.close
