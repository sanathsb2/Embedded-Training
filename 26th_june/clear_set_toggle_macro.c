#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define CLEAR(number,bit)     number &= ~(1 << bit)
#define SET(number,bit)       number |= (1<<bit)
#define TOGGLE(number,bit)    number ^= (1<<bit)

int main(void)
{   int number = 7;
    int temp1,temp2,temp3;
    temp2=temp2=temp3=number;
    int bit = 3;
    CLEAR(temp1,bit);
    printf("%d\n",temp1);
    SET(temp2,bit);
    printf("%d\n",temp2);
    TOGGLE(temp3,bit);
    printf("%d",temp3);
    return 0;
}
