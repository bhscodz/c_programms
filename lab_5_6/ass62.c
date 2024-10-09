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
    int temp;
    for (int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;
    };
    printf("array after reversing");
    for(int k=0;k<n;k++) {
        printf("%d ",arr[k]);
    }   
}
