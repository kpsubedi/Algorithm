def dosearch(A,x,L,R):
    m = (L + R)/2
    if A[m] == x:
        return True
    elif x < A[m]:
        dosearch(A,x,L,m-1)
    else:
        dosearch(A,x,m+1,R)
    return False

def main():
    A = [1,6,8,34,90]
    x = 9
    print A
    print x
    res = dosearch(A,x,0,len(A)-1)
    print res

if __name__=='__main__':
    print("Welcome to Recursive Version of Binary Search:")
    main()

