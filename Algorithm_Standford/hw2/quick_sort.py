import os
import argparse

def getfilename():
    parser = argparse.ArgumentParser(description="Quick Sort Algorithm")
    parser.add_argument('filename',type=str,help='File Name')
    args = parser.parse_args()
    #print args
    return args.filename

def readfile(file):
    my_list = []
    fh = open(file,'r')
    for line in fh:
        #print line.strip()
        my_list.append(line.strip())
    return my_list

def processarray(A):
    for i in range(len(A)):
        print A[i]
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
    #print A
    return i-1

def doquicksort(input_array,L,R):
    if L < R:
        p = dopartition(input_array, L, R)
        doquicksort(input_array, L, p)
        doquicksort(input_array, p+1, R)
    return input_array
def main():
    #file_name = 'QuickSort.txt'
    file_name = getfilename()
    print "Input File###",file_name
    #input_array = readfile(file_name)
    input_array=[24,90,4,8,9,34,2,5,1,7,6,670,120]
    print "Length:#",len(input_array)
    print input_array
    #print "Given Input:", Aa
    #print "Index:#",dopartition(input_array,0,len(input_array))
    print "Quick Sort:",doquicksort(input_array,0,len(input_array))
    print input_array
    #print "Index:#",dopartition(Aa)



if __name__=='__main__':
    main()
 
