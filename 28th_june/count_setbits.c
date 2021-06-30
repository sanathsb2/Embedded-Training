#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int countf(int number){
    int count=0;
    for(int i=0;i<(sizeof(number)*8);i++){
        printf("%d\n",number);
        if(number&(1)){
            count++;
        }
        number = number>>(1);
    }
    printf("%d",count);
}

int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    
    countf(number);
    
    return 0;
}
