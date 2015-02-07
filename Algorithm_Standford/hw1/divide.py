#divide and conquer

def getCountInversion(array,temp,left,right):
    invCount = 0
    mid = 0
    invCount = 0
    if right > left:
        mid = (left + right)/2
        invCount = getCountInversion(array,temp,left,mid)
        invCount = invCount +  getCountInversion(array,temp,mid+1,right)
        invCount = invCount + getSplitCountInversion(array,temp,left,mid+1,right)

    return invCount

def getSplitCountInversion(array,temp,left,mid,right):
    invCount = 0
    i = left
    j = mid
    k = left
    
    while((i <= mid -1) and (j <= right)):
        if array[i] <= array[j]:
            temp[k] = array[i]
            i = i+1
            k = k+1
        #elif array[i] > array[j]:
	else:
            temp[k] = array[j]
            j = j + 1
            k = k + 1
            invCount = invCount + (mid-i)
    #left part
    while i <=mid -1:
        temp[k] = array[i]
        i = i+1
        k = k+1
    #right part
    while j <= right:
        temp[k] = array[j]
        j = j + 1
        k = k + 1
    # copy all 
    for i in range(left,right + 1):
        array[i] = temp[i]
    return invCount



#print "len=", len(a)
#print temp
#print getCountInversion(a,temp,0,len(a)-1)

with open('IntegerArray.txt', 'r') as line:
#with open('sample.txt', 'r') as line:
    lines = [int(i.strip()) for i in line]    
    print "List Size:", len(lines)
#print lines
#lines = [1,3,5,2,4,6]
temp = [0]*len(lines)
print "len=", len(lines)
print len(lines)
print "counting inversion = ", getCountInversion(lines,temp,0,len(lines)-1)

"""
with open('IntegerArray.txt', 'r') as line:
    lines = [int(i.strip()) for i in line]  
  

#print lines
temp = [None]*len(lines)
print "len=", len(lines)
print lines
print "Performing----"
count = getCountInversion(lines,temp,0,len(lines)-1)

print "counting inversion = ", count

    """
