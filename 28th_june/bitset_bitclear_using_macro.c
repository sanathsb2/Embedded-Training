#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define SETBIT(a,b)    (a=a|(1<<b))
#define CLEARBIT(a,b)   (a=a^(1<<b))

int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    
    int temp1,temp2;
    temp1 = temp2 =number;
    
    int bit_to_be_set,bit_to_be_cleared;
    printf("enter the bit number to be set\n");
    scanf("%d",&bit_to_be_set);
    
    printf("enter the bit number to be cleared\n");
    scanf("%d",&bit_to_be_cleared);
    
    SETBIT(temp1,bit_to_be_set);
    printf("number after setting %dth bit is: %d\n",bit_to_be_set, temp1);
    
    CLEARBIT(temp2,bit_to_be_cleared);
    printf("number after clearing %dth bit is: %d",bit_to_be_cleared,temp2);
    return 0;
}
