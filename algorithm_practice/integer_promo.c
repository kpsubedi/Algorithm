#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void signed_char_expression(void);
void complement_unsigned_char(void);


int main(int argc, char **argv){
signed_char_expression();
complement_unsigned_char();


return EXIT_SUCCESS;
}


void signed_char_expression(){
signed char c1 = 100;
signed char c2 = 3;
signed char c3 = 4;

signed char cresult = c1 * c2 / c3;
//                  = 100 * 3 /4
//                  = 300 / 4
//
// Here integer promotion helps while copying movsx eax, byte ptr [c1]
//
// cdq bit extension
// now mov al register to cresult
//

printf("cresult = %d.\n", cresult);
return;
}

void complement_unsigned_char(void){
unsigned char uc = UCHAR_MAX; //0xFF

int i = ~uc; //complement flip all bits
// Look to assembly
// movzx eax, byte ptr [uc]
// clear higher order eax
//

printf("i = %d.\n",i);
}

