#include<stdio.h>
#include<stdlib.h>

void partition(int *, int , int);
void display(int *, int );
int main(int argc, char **argv){

	int *input;
	int n,i;
	printf("How many integers:\n");
	scanf("%d",&n);
	input = malloc(n*sizeof(int ));
	for(i = 0;i < n; i++){
		scanf("%d",(input+i));
	}
	printf("Before Partiton:\n");
	display(input,n);
	partition(input,0,n-1);
	return EXIT_SUCCESS;
}


void display(int *p, int c){
	int j;
	for(j = 0; j < c; j++){
		printf("%d\t",*(p+j));
	}
	printf("\n");
}

void partition(int *input, int L, int R){
}
