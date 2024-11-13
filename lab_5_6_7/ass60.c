#include <stdio.h>
int main(){
    int arr1[10];
    printf("enter the numbers for first array");
    for(int i=0;i<10;i++){
        scanf("%d",(arr1+i));
    }
    int temp;
    for(int j=0;j<10;j++){
        for(int k=j+1;k<10;k++){
            if(arr1[j]>arr1[k]){
                temp=arr1[j];
                arr1[j]=arr1[k];
                arr1[k]=temp;
            };
        };
    }
    printf("array after selection sort");
    for(int i=0;i<10;i++){
        printf("%d ",arr1[i]);
    }

}