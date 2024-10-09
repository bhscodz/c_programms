#include <stdio.h>
int main(){
    int n;
    printf("enter the number of elements you want in array \n");
    scanf("%d",&n);
    int arr[n];
    printf("start entring the values");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    };
    printf("enter the position from where you want to rotate the array");
    int x;
    scanf("%d",&x);
    
    int arr2[n];
    for (int k=0;k<n;k++){
        arr2[k]=arr[(k+x)%n];
    }
    printf("array after rotating by %d positions \n",x);
    for (int k=0;k<n;k++){
        printf("%d ",arr2[k]);
    }
}