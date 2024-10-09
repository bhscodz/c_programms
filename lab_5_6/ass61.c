#include <stdio.h>
// bubble sort 
int main(){
    int n=5,temp;
    printf("enter 5 elements for array to be sorted");
    int arr[n];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=1;i<n;i++){
        for(int j=0;j<(n-i);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}