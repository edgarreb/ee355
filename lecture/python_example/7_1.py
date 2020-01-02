
# read file line by line v 4

f7 = open("test1.txt", "r")

line = list(f7)
j =0;
for i in range (len(line)) :
   mlist = line[i].split()
   for i in mlist:
     print(i)

f7.close()
