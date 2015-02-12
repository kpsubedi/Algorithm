import os
import argparse

def getfilename():
    parser = argparse.ArgumentParser(description="Quick Sort Algorithm")
    parser.add_argument('filename',type=str,help='File Name')
    args = parser.parse_args()
    return args.filename

def readfile(file):
    my_list = []
    fh = open(file,'r')
    for line in fh:
        my_list.append(int(line.strip()))
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
    #file_name = 'QuickSort.txt'
    file_name = getfilename()
    print "Input File###",file_name
    input_array = readfile(file_name)
    #input_array=[3,8,2,5,1,4,7,0]
    print "Length:#",len(input_array)
    #print input_array
    #print "Given Input:", Aa
    #print "Index:#",dopartition(input_array,0,len(input_array))
    #print "Quick Sort:",doquicksort(input_array,0,len(input_array))
    output_result = doquicksort(input_array,0,len(input_array))
    print output_result
    writeoutput(output_result)
    #print input_array
    #print "Index:#",dopartition(Aa)



if __name__=='__main__':
    main()
 
