import argparse


def readfile():
	data_list = []
	fd = open('IntegerArray.txt','r')
	for line in fd:
		data_list.append(int(line))
	return data_list	
	
def findcount(A):
	count = 0
	for i in range(len(A)):
		for j in range(i,len(A)):
			if A[i] > A[j]:
				count = count + 1
	return count


def main():
	B = readfile()
	print type(B), len(B)
	#print B, type(B)
	A = [6,5,4,3,2,1,9,8,12]
	print findcount(B)

if __name__=='__main__':
	main()

