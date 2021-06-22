
#include <stdio.h>

int main()
{
    int arr[6] = {289,49,19,56,56,2};
    int largest, secondLargest;
    
    largest = arr[0];
    
    for(int i=1;i<6;i++){
        if(arr[i] >= largest){
          largest = arr[i];
        }
    }
    
    secondLargest = 0;
    
    for(int i=1;i<6;i++){
        if((arr[i] < largest)&&(arr[i] > secondLargest)){
            secondLargest = arr[i];
        }
    }
    
    printf("%d \n",largest);
    printf("%d",secondLargest);
    return 0;
}
