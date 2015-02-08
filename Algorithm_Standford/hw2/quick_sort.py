import os
import argparse

def getfilename():
    parser = argparse.ArgumentParser(description="Read File Name")
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
def main():
    #file_name = 'QuickSort.txt'
    file_name = getfilename()
    print "Input File###",file_name
    print "Length:#",len(readfile(file_name))
    #print readfile(file_name)
    #readfile(file_name)


if __name__=='__main__':
    main()
 
