#include <stdio.h>
int main(){
    printf("enter the size of array");
    int a;
    scanf("%d",&a);
    printf("entre the elements of array");
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a-1;j++){
        if(arr[j]>arr[j+1]){
            printf("pivot element is:%d",arr[j+1]);
            break;
        }
    }

}