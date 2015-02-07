def find3sum(A):
    count = 0
    for i in range(len(A)):
        for j in range(i+1, len(A)):
            for k in range(j+1, len(A)):
                if A[i] + A[j] + A[k] == 0:
                    count = count + 1

    return count


def main():
    A = [30, -40, -20, -10, 40, 0, 10, 5]
    print find3sum(A)
if __name__=='__main__':
    main()

