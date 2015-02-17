#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	int n,r;
	printf("Please Enter a number:\n");
	scanf("%d",&n);
	while(n>1){
	r = n % 10;
	printf("%d\n",r);
	n = n - r;
	//printf("%d.\n",n);
	n = n / 10;
	}
	//printf("%d\n",n);
	//printf("%d\n",r);

	printf("Your number is %d.\n",n);
	
	return EXIT_SUCCESS;
}
