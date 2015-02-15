def do_merge(A,B):
    i = 0
    j = 0
    k = 0
    temp = []
    while i < len(A) and j < len(B):
        if A[i] < B[j]:
            temp[k] = A[i]
            i = i + 1
	else:
	    temp[k] = B[j]
	    j = j + 1
	k = k + 1
    while i < len(A):
        temp[k] = A[i]
        i = i + 1
        k = k + 1          
    while j < len(B):
        temp[k] = B[j]
        j = j + 1
        k = k + 1
    return temp
def carry_merge_sort(X,L,R):
    print L, R
    if L < R:
        m = (L + R)/2
        carry_merge_sort(X,L,m)
        carry_merge_sort(X,m,R)
    return do_merge(X[L:m],X[m:R])
            
  

def main():
    A = [4,3,5,8,7]
    carry_merge_sort(A,0,len(A))

if __name__=='__main__':
	main()

