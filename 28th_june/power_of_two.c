#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int power(int number){
    if((number==1) || (number%2!=0)){
        return 1;
    }
    if(number%2!=0){
        return 1;
    }
    power(number/2);
}


int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(power(number) == 0){
        printf("Number is a power of 2\n");
    }
    else{
        printf("Number is not a power of 2\n");
    }
    return 0;
}
