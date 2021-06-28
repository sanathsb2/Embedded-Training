#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

static int N;

int print(int i){
    
    if(i>N)
        return 0;
    print(i+1);
    printf("%d\n", i);
}

int main()
{
    
    printf("enter the number\t");
    scanf("%d", &N);
    print(1);
    
    
    return 0;
}
