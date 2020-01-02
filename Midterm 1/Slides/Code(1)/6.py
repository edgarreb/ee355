
# read file line by line v 3


f6 = open('test1.txt', "r")


line = f6.readline()

while line:
    # print line
    print(line)
    line = f6.readline()

f6.close()
