def dosearch(A,x,L,R):
    while L <= R:
	m = (L + R)/2
        if x==A[m]:
            return mid
	elif x < A[m]:
	    R = m - 1
        else:
	    L = m + 1
    return -(L+1)

def insertInPlace(A,target):
    idx = doserach(A,target,0,len(A))
    if idx < 0:
        A.insert(-(idx+1), target)
        return
    A.insert(idx, target)

def main():
    A = [1,5,7,9,11]
    print A
    x = 90
    print x
    res = dosearch(A,x,0,len(A)-1)
    print res
if __name__=='__main__':
    print("Welcome to Iterative version of BinarySearch:")
    main()
          
    insertInPlace(A,50)
    print A
   



