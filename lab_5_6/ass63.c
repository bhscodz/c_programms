#include <stdio.h>
int main(){
    int arr[3][3];
    printf("start entering values in the matrix \n");
    for(int i=0;i<3;i++){
        printf("enter %d row elements ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    };
    int max,min=arr[0][0];
    max=min;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]>max?max=arr[i][j]:max;     
            arr[i][j]<min?min=arr[i][j]:min;     
        }
    };
    printf("maximum value in the array %d \nminimum value in the array %d",max,min);    
}