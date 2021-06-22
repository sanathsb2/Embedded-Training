#include <stdio.h>
#define arr_size 6

int main()
{   
    int temp;
    int arr[arr_size] = {1,2,3,4,5,6};        
    int user_requirement = 2;
    
    for(int i=0;i<user_requirement;i++){
        temp = arr[0];
        for(int j=1;j<arr_size;j++){
            arr[j-1] = arr[j];
        }
        arr[arr_size-1] = temp;
        
    }
    
    for(int i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
