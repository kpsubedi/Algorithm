#include<stdio.h>

int main(void){

unsigned int ui = 300;
unsigned char uc = ui;

// w (unsigned char) is 8 for this implementation
// the value 300 is reduced modulo 2 raised to the power 8
// 300 - 256 = 44
//
//Assembly unsigned int ui = 300 --> mov   dword ptr [ui], 12ch
//unsigned char uc = ui   ---> mov al, byte ptr[ui]
//mov byte ptr[uc], al
//

printf("uc = %uc.\n", uc);

return 0;
}

