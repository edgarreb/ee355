import random
import itertools

#Pick a random number in a given range
print "Generate 10 random integers between 0 to 5: "
for i in range(10):
	print random.randint(0,5),  

print "\n\nGenerate 10 random numbers between [0.0, 1.0):"
for i in range(10):
	print random.random(),

print "\n\nGenerate 10 random numbers between [0.0, 100.0):"
for i in range(10):
	print random.random()*100, 

print "\n\nGenerate 10 random numbers between [10.0, 20.0]:"
for i in range(10):
	print random.uniform(20,10), # same as uniform(10,20)

#Pick a random element from a sequence
print "\n\nPick a random element from a tuple"
for i in range(10):
	print random.choice( ('red', 'black', 'green') ),

print "\n\nPick a random element from a list"
myList = [2, 109, False, 10, "Lorem", 482, "Ipsum"]
for i in range(10):
	print random.choice(myList),

#Shuffles the elements in list
print "\n\nBefore Shuffle, the list is:"
print myList
random.shuffle(myList)
print "\nAfter shuffle, the list is:"
print myList

#random.sample(population, k) Return a k length list of unique elements chosen from the population sequence
print "\nChoose 5 uniq element randomly from a list:"
list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  
slice = random.sample(list, 5)
print slice

print "\ngenerate 10 numbers without repeatation:"
x=random.sample(xrange(10), 10)
print x

#random.randrange(start, stop, step)
print "\nGenerate a random number between 0 to 101 with step 5:"
for i in range(3):
    print random.randrange(0, 101, 5)

#Flip a coin
print "\nFlip a coin for 10000 times:"
outcomes = { 'heads':0, 'tails':0,}
sides = outcomes.keys()

for i in range(10000):
    outcomes[ random.choice(sides) ] += 1

print 'Heads:', outcomes['heads']
print 'Tails:', outcomes['tails']