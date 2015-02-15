#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void do_merge(int *pq, int L, int m, int R){
	int *temp = malloc((R-L+1)*sizeof(int));
	int i = L;
	int j = m+1;
	int k = 0;
	while(i <= m && j <= R) {
		if(*(pq+i)<*(pq+j)){
		*(temp + k) = *(pq +i);
		i = i + 1;
		}
		else{
		*(temp + k) = *(pq+j);
		j = j + 1;
	}
	k = k + 1;
	}
	while(i <= m) {
		*(temp+k) = *(pq+i);
		k = k + 1;
		i = i + 1;

	}
	while(j <= R) {
		*(temp + k) = *(pq + j);
		k = k + 1;
		j = j + 1;
	}
    //return temp;	
    pq = temp;
}
void carry_mergesort(int *p, int L, int R){
	unsigned int m;
	if(L < R){
		m = (L + R)/2;
		carry_mergesort(p,L,m);
                carry_mergesort(p,m+1,R);
	        do_merge(p,L,m,R);
	}
}
	

int main(int argc, char **argv){
	int A[MAX] = {2,7,4,9,5};
	int j;
	for(j=0;j<MAX;j++){
		printf("%d\t",A[j]);
	}	
	
	int *input;
	input = A;
	int i;
	printf("\n");
	//int *res;
	carry_mergesort(A,0,MAX-1);
	for(i = 0;i < MAX; i++)
		{
		printf("%d\t",A[i]);
		}
	return EXIT_SUCCESS;
}
