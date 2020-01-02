#read files version2

f5 = open('test1.txt', "r")

line = f5.readlines()

x=len(line)
for i in range(x):
  print line[i]  

f5.close()

