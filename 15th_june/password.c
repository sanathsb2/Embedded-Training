#include <stdio.h>
#include<conio.h>

int main()
{
    char password[20];
    int i=0;
    printf("enter password (less than 20 characters)\n");
    do{
        password[i] = getchar();
        if(password[i] != '\r')
            printf("*");
        i++;
        
    }while(password[i-1] != '\r');

    return 0;
}
