#include <stdio.h>

int main()
{
    int arr1[6] = {289,49,19,56,56,2};  // not sorted in ascending order
    int arr2[6] = {1,2,3,4,5,6};        // sorted in ascending order
    
    
    
    for(int i=1;i<6;i++){
        if(arr2[i] < arr2[i-1]){        //replace can use arr1 or arr2 to verify
            printf("not sorted in ascending order\n");
        }
        
    }
    
    printf("sorted in ascending order");
  
  return 0;
}
