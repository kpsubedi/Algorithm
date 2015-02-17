import os
from random import randint
def dopartition(A,L,R):
    pivot = A[L]
    i = L + 1
    for j in range(L+1,R):
        if A[j] < pivot:
	    temp = A[j]
	    A[j] = A[i]
            A[i] = temp
	    i = i + 1
    temp1 = A[i-1]
    A[i-1] = pivot
    A[L] = temp1
    return i-1
def doquicksort(input_array,L,R):
    if L < R:
        p = dopartition(input_array, L, R)
        doquicksort(input_array, L, p)
        doquicksort(input_array, p+1, R)
    return input_array
def writeoutput(output_array):
    fd = open('output.txt.','w')
    for data in output_array:
        fd.write(str(data))
        fd.write("\n")
def main():
    input_array = []	
    for i in range(1,100):
        input_array.append(randint(1,i))
    print input_array
    print "Length:#",len(input_array)
    output_result = doquicksort(input_array,0,len(input_array))
    print output_result
    writeoutput(output_result)

if __name__=='__main__':
    main()
 
