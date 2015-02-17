#include<stdio.h>
#include<stdlib.h>

void display(char *, int);
void remove_dup(char *, int);
int main(int argc, char **argv){
	
	char name[7] = "parashs";
	display(name,7);
	remove_dup(name,7);
	display(name,7);
	return EXIT_SUCCESS;
}
void display(char *p, int c){
	int i;
	for(i = 0; i < c; i++){
	printf("%c",*(p+i));
	}
	printf("\n");
}
void remove_dup(char *pp, int n){
	int i,j,tail;
	tail = 1;
	for(i = 1; i < n; i++)
		{
		for(j = 0; j < tail; j++){
			if(*(pp+i)==*(pp+j))
				break;
		}
		if(j == tail){
			*(pp+tail) = *(pp + i);
			++tail;
		}
	}
	*(pp + tail) = 0;
			
}
