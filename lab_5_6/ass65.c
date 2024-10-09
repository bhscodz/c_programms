#include <stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        printf("enter the values for row %d \n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix after transpose\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}