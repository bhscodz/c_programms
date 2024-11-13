#include <stdio.h>
int main(){
    int arr1[10];
    int arr2[10];
    int arr3[20];
    printf("enter the numbers for first array");
    for(int i=0;i<10;i++){
        scanf("%d",(arr1+i));
    }
    printf("enter the numbers for second array");
    for(int i=0;i<10;i++){
        scanf("%d",(arr2+i));
    }
    int *arr;
    for(int k=0;k<2;k++){
        arr=k==0?arr1:arr2;
        for(int i=0;i<10;i++){
            *(arr3+i+k*10)=*(arr+i);
        };
    };
    for(int i=0;i<20;i++){
        printf("%d ",*(arr3+i));
    };
    return 0;
};