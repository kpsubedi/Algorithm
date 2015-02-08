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
def dopartition(A):
    pivot = A[0]
    print A
    #print pivot
    i = 1
    j = 1
    k = 1
    print A[i], A[j]
    for j in range(2,len(A)):
        if A[i] > A[j]:
            temp = A[i]
            A[i] = A[j]
            A[j] = temp
            j = j + 1
            #i = i +1
        elif A[i] < A[j]:
            #k = k + 1
            #j = j + 1
            i = i + 1
        #else:
            #print i, j
    print "Final Array,A=", A,"i=", i,"j=", j
    # swap i and pivot
    temp1 = A[i]
    print temp1
    #print A
def main():
    #file_name = 'QuickSort.txt'
    file_name = getfilename()
    print "Input File###",file_name
    input_array = readfile(file_name)
    print "Length:#",len(input_array)
    #processarray(input_array)
    Aa=[3,8,2,5,1,4,7,6]
    dopartition(Aa)
    #print readfile(file_name)
    #readfile(file_name)


if __name__=='__main__':
    main()
 
