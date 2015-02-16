#include<stdio.h>

void reverse(char *);
void display(char *);

int main(int argc, char **argv){
int i;
char t;
char input[5] = "abc";

for(i = 0; i < 5; i++){
printf("%c",input[i]);
}

printf("\n");

reverse(input);
display(input);

for(i = 0; i < 3; i++){
	t = input[i];
	//printf("%c = %c\n",t,input[4-i]);
	input[i] = input[5-1-i];
	input[5-1-i] = t;
}

printf("\n");
	
//for(i = 0; i < 5; i++)
//{
//printf("%c",input[i]);
//}
//printf("\n");
return 0;

}
void display(char *output){
	//int j;
	while(*output){
		printf("%c",*(output));
		output++;
	//for(j = 0; j < 5; j++){
		//printf("%c",*(output+j));
	}
}

void reverse(char *str){
	char *end = str;
	char tmp;
	if(str){
	while(*end){
		++end;
		}
		--end;
	while(str < end) {
		tmp = *str;
		*str++ = *end;
		*end-- = tmp;
		}
	}
}


