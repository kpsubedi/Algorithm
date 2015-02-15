#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int main(int argc, char **argv){

signed char sc;
signed short ss;
signed int si;
signed long sl;
signed long long sll;


unsigned char uc;
unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;
printf("Size of signed char sc = %d bytes and min = %d max = %d.\n",sizeof(sc),SCHAR_MIN, SCHAR_MIN);
printf("Size of signed short sc = %d bytes and min = %d and max = %d.\n",sizeof(ss), SSHRT_MIN, SSHRT_MAX);
printf("Size of signed int sc = %d bytes and min = %d and max = %d.\n",sizeof(si),SINT_MIN, SINT_MAX);
printf("Size of signed long sc = %d bytes and min = %d and max = %d.\n",sizeof(sl),SLONG_MIN, SLONG_MAX);
printf("Size of signed long long sc = %d bytes and min = %d and max = %d.\n",sizeof(sll),0,2);


printf("Size of unsigned char sc = %d bytes.\n",sizeof(uc));
printf("Size of unsigned char sc = %d bytes.\n",sizeof(us));
printf("Size of unsigned char sc = %d bytes.\n",sizeof(ui));
printf("Size of unsigned char sc = %d bytes.\n",sizeof(ul));
printf("Size of unsigned char sc = %d bytes.\n",sizeof(ull));

return EXIT_SUCCESS;
}

