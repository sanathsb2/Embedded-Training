#include <stdio.h>

int main()
{
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3] = {};
    
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            for(int j=0;j<3;j++){
                result[row][col] += arr1[row][j]*arr2[j][col];
        }
            
        }
        
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
