
# read file line by line v 4

f7 = open("test2.txt", "r")

line = list(f7)
j =0;
for i in range (len(line)) :
   mlist = line[i].split()
   for i in mlist:
     if (i == 'ERROR') :
      print ("Error Found ") 

f7.close()
