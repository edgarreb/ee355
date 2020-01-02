
# read file line by line v 4

f7 = open("test1.txt", "r")

line = list(f7)

for i in range (len(line)) :
  print line[i]


f7.close()
