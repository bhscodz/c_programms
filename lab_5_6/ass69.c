#include <stdio.h>
int main(){
    int arr[10]={1,2,3,11,12,13,4,44,15,11};
    printf("elements in array \n");
    for(int j=0;j<10;j++){
        printf("%d ",arr[j]);
    }
    
    printf("\nenter the element you want to search in array");
    int y;
    scanf("%d",&y);
    for(int i=0;i<10;i++){
        if(arr[i]==y){
            printf("element found at index %d",i);
            return 0;
        }
    }
    printf("element not found");
    return 0;
}
