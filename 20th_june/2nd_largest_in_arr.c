
#include <stdio.h>

int main()
{
    int arr[6] = {289,49,19,56,56,2};
    int largest=0, secondLargest=0;
  
    for(int i=0;i<6;i++){
        if(arr[i] >= largest){
          largest = arr[i];
        }
    }

    for(int i=0;i<6;i++){
        if((arr[i] < largest)&&(arr[i] > secondLargest)){
            secondLargest = arr[i];
        }
    }
    
    printf("%d \n",largest);
    printf("%d",secondLargest);
    return 0;
}
