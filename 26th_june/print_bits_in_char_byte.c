void bin(char n)
{
    
    if (n > 1)
        bin(n / 2);
 
   
    printf("%d", n % 2);
}
 

int main(void)
{   char byte = 'S'
    bin(byte);
    printf("\n");
    bin(4);
    return 0;
}
