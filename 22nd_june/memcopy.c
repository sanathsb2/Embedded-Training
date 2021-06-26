#include <stdio.h>

void * memcopy( void * dest, const void * src, int size){
    
    char * csrc = ( char *)src;
    char * cdest = ( char *)dest;
    
    for(int i=0;i<size;i++){
        *cdest = *csrc;
        cdest++;
        csrc++;
    }
}
int main()
{
    char source[] = "sanath";
    char destination[sizeof(source)];
    memcopy(destination,source, sizeof(source));
    printf("%s\n", destination);
    //printf("%d\n", sizeof(source));
    //printf("%d", sizeof(destination));

    return 0;
}
