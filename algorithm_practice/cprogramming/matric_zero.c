#include<stdio.h>
#include<stdlib.h>


//void display(int [][]);

int main(int argc, char **argv){
	int i,j,k,l;
	unsigned int count = 0;
	int A[4][4] = {
			{1,2,4,0},
			{9,0,5,8},
			{4,3,9,1},
			{5,6,8,7}
			};

	//display_array(&A[0][0]);
	//
	
	int B[4][4] = {
			{1,2,4,0},
			{9,0,5,8},
			{4,3,9,1},
			{5,6,8,7}
			};
	printf("Original Matrix:\n");
	for(i = 0 ; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
		printf("%d\t",A[i][j]);
			}
	}
	for(i = 0 ; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
		//printf("%d\t",A[i][j]);
			if(A[i][j] == 0){
				A[i][j] = 10;
				count = count + 1;
				for(k = 0; k < 4; k++){
					A[i][k] = 10;
					}	
				for(l = 0; l < 4; l++){
					A[l][j] = 10;
				//printf("(%d, %d)\n",i,j);
			}
		}
	}
}
	printf("\n");
	printf("Changed Matrix:\n");
	for(i = 0 ; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
		printf("%d\t",A[i][j]);
			}
	}

	printf("\n");

	
	for(i = 0 ; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
		printf("%d\t",A[i][j]);
			if(A[i][j]==10){
				A[i][j] = 0;
			}
			}
	}
	printf("\n");
	//printf("Number of zero=%d\n",count);
	for(i = 0 ; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
		printf("%d\t",A[i][j]);
			}
	}
	printf("\n");
	return EXIT_SUCCESS;
}
