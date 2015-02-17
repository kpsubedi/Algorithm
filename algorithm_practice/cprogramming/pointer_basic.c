#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **Argv){
	int *mydata;
	int data;
	printf("size of int pointer =%d\n",sizeof(mydata));
	printf("Please Enter number:\n");
	scanf("%d",&data);
	printf("address of data = %u\n",&data);
	mydata = &data; // now mydata pointer points to address of our data
	printf("The value stored in address = [%u] is %d\n",mydata,*mydata);	
	return EXIT_SUCCESS;
}

