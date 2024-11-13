#include <stdio.h>
int main(){
    int arr3[3][3];
    int arr[3][3];
    for(int i=0;i<3;i++){
        printf("enter the values for row %d \n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the values for next matrix \n");
    int arr2[3][3];
    for(int i=0;i<3;i++){
        printf("enter the values for row %d \n",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int k=0;k<3;k++){
        for(int x=0;x<3;x++){
            arr3[k][x]=arr[k][x]-arr2[k][x];
        }
    }
    printf("matrix after substarcting");
    for(int k=0;k<3;k++){
        for(int x=0;x<3;x++){
            printf("%d ",arr3[k][x]);
        }
       printf("\n");
    }
    return 0;
}
