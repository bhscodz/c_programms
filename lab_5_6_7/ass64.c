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
    for (int k=0;k<3;k++){
        printf("sum of all elements of row %d is %d \n",k+1,arr[k][0]+arr[k][1]+arr[k][2]);
    }
}