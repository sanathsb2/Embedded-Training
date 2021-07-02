#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



int main(void){
    unsigned char number = 0x1f;
    unsigned char tempnum = number;
    unsigned char num1 = number<<4;     //lower nibble
    unsigned char num2 = tempnum>>4;    //higher nibble
    //char num2 = tempnum;
    printf("higher nibble: %x\n", num1);
    printf("lower nibble: %x\n", num2);
    unsigned char final_number = num1+num2;
    printf("final number: %x", final_number);
    return 0;
}

/*
OUTPUT

higher nibble: f0
lower nibble: 1
final number: f1

*/
