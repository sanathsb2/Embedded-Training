#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

void dec_to_bin(int decNum)
{
    if (decNum == 0)
        return;
    
    dec_to_bin(decNum/2);
    printf("%d\n",decNum%2);
    
}
 
int main()
{
    int decNum;
    printf("Enter the decimal number\t");
    scanf("%d",&decNum);
    dec_to_bin(decNum);
    return 0;
}
