#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

int print(int N){
    
    if(N==0)
        return 0;
    print(N-1);
    printf("%d\n", N);
}

int main()
{
    int N;
    printf("enter the number\t");
    scanf("%d", &N);
    print(N);
    
    
    return 0;
}
