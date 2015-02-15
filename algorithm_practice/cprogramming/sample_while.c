#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	char choice;
	printf("Please Enter Your Choice:\n");
	while(1) {
		scanf("%c",&choice);
		switch(choice){
			case 'a':
				printf("We are adding new node to list:\n");
				break;
			case 'c':
				printf("you are in c:\n");
				break;
			case 'e':
				printf("Exit Section:\n");
				exit(0);
			}
	}

	return EXIT_SUCCESS;
}

