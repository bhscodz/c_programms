#include<stdio.h>
#include<limits.h>
int arr(int x){
    int a[x];
    for(int i=0;i<x;i++){
        printf("enter ele number %d: ",i);
        scanf("%d",&a[i]);
    }
    int max= INT_MIN;
    for(int i=0;i<x;i++){
        if(max<a[i]){
            max=a[i];
        }
            }
            printf("the max element is %d",max);
           // return max;
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    arr(n);
    return 0;
}