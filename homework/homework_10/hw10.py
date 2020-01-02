def printAllKLength(set, k): 
  
    n = len(set)  
    printAllKLengthRec(set, "", n, k) 
  
# The main recursive method 
def printAllKLengthRec(set, prefix, n, k): 
      
    # Base case: k is 0, 
    # print prefix 
    if (k == 0) : 
        print(prefix) 
        return
  
    # One by one add all characters  
    # from set and recursively  
    # call for k equals to k-1 
    for i in range(n): 
  
        # Next character of input added 
        newPrefix = prefix + set[i] 
          
        # k is decreased, because  
        # we have added a new character 
        printAllKLengthRec(set, newPrefix, n, k - 1) 
  
if __name__ == "__main__": 
      
    print("First Test") 
    set1 = ['1', '0'] 
    k = 3
    printAllKLength(set1, k) 
      
    print("\nSecond Test") 
    set2 = ['1', '2', '3', '4'] 
    k = 1
    printAllKLength(set2, k)

    print("\nThird Test")
    set3 = ['a', 'b', 'c', 'd']
    k = 3
    printAllKLength(set3, k) 
