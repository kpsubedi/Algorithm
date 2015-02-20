#include<stdio.h>
#include<stdlib.h>

int get_factorial(int n, int a){
	if(n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return a;
	else
		return get_factorial(n-1, n * a);
}

int main(int argc, char **argv){
	int n;
	int fact,a;
	printf("Please enter an number:\n");
	scanf("%d",&n);
	a = 1;
	fact = get_factorial(n, a);
	
	printf("The factorial of %d is %d.\n",n,fact);
	return EXIT_SUCCESS;
}


