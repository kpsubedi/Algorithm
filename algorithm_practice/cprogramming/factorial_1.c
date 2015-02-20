#include<stdio.h>
#include<stdlib.h>

int get_factorial(int x){
	if( x < 0){
		return 0;
		}
	if(x == 0 || x == 1){
		return 1;
		}
	else{
		return x*get_factorial(x-1);
	}
}
int main(int argc, char **argv){

	unsigned int n;
	unsigned int fact;
	printf("\nPlease Enter a number:");
	scanf("%d",&n);
	fact = get_factorial(n);
	printf("The Factorial of: %d  is :%d.\n",n,fact);
	return EXIT_SUCCESS;
}
