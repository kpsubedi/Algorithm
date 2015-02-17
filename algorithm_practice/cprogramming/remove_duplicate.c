#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display(char *, int);
int main(int argc, char **argv){
	char *myname;
	int n,i;
	printf("Enter length of your name:\n");
	scanf("%d",&n);
	myname = malloc(n*sizeof(char ));
	printf("The size of=%d",sizeof(myname));
	for(i = 0; i <= n; i++){
		scanf("%c",(myname+i));
	}
	display(myname, n);
	return EXIT_SUCCESS;
}

void display(char *name, int n){
	int i;
	for(i = 0; i < n; i++){
	printf("%c",*(name + i));
	}
}




