#include <stdio.h>
int main(){
    int arr1[5]={1,4,5,5,8};
    int arr2[5]={1,2,7,8,9};
    int arr3[10];
    for (int y=0;y<10;y++){
        arr3[y]=y<5?arr1[y]:arr2[y-5];
    }
    int temp;
    for(int j=0;j<10;j++){
        for(int k=j+1;k<10;k++){
            if(arr3[j]>arr3[k]){
                temp=arr3[j];
                arr3[j]=arr3[k];
                arr3[k]=temp;
            };
        };
    }
    for(int f=0;f<10;f++){
        printf("%d ",arr3[f]);
    }
    return 0;
}