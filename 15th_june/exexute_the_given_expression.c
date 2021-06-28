/*exexute the expression of x given below*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int a=2,b=1,x;
    x =(a++&&(!b)&&b||++a); 
    printf("%d",x);
    
    
    return 0;
}
