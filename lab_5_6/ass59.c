#include <stdio.h>
int main(){
    int arr1[10];
    int arr2[10],temp;
    printf("enter the numbers for first array");
    for(int i=0;i<10;i++){
        scanf("%d",(arr1+i));
    }
    printf("enter the numbers for second array");
    for(int i=0;i<10;i++){
        scanf("%d",(arr2+i));
    }
    for(int i=0;i<10;i++){
        temp=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
    }
    printf("array 1 after swaping \n");
    for(int i=0;i<10;i++){
        printf("%d ",*(arr1+i));
    }
    printf("array 2 after swaping \n");
    for(int i=0;i<10;i++){
        printf("%d ",*(arr2+i));
    }

}